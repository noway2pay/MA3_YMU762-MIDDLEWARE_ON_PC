#include <windows.h>
#include <stdio.h>

#include "masound.h"

//------------------------------------------------------------------------------------------------------------

typedef int (*T_pf_Phrase_Initialize)(void);
typedef int (*T_pf_Phrase_Terminate)(void);
typedef int (*T_pf_Phrase_GetInfo)(struct info* dat);
typedef int (*T_pf_Phrase_CheckData)(unsigned char* data, unsigned long len);
typedef int (*T_pf_Phrase_SetData)(int ch, unsigned char* data, unsigned long len, int check);
typedef int (*T_pf_Phrase_Seek)(int ch, long pos);
typedef int (*T_pf_Phrase_Play)(int ch, int loop);
typedef int (*T_pf_Phrase_Stop)(int ch);
typedef int (*T_pf_Phrase_Pause)(int ch);
typedef int (*T_pf_Phrase_Restart)(int ch);
typedef int (*T_pf_Phrase_Kill)(void);
typedef void (*T_pf_Phrase_SetVolume)(int ch, int vol);
typedef int (*T_pf_Phrase_GetVolume)(int ch);
typedef void (*T_pf_Phrase_SetPanpot)(int ch, int vol);
typedef int (*T_pf_Phrase_GetPanpot)(int ch);
typedef int (*T_pf_Phrase_GetStatus)(int ch);
typedef long (*T_pf_Phrase_GetPosition)(int ch);
typedef long (*T_pf_Phrase_GetLength)(int ch);
typedef int (*T_pf_Phrase_RemoveData)(int ch);
typedef int (*T_pf_Phrase_SetEvHandler)(void (*func)(struct event*));
typedef int (*T_pf_Phrase_SetLink)(int ch, unsigned long slave);
typedef unsigned long (*T_pf_Phrase_GetLink)(int ch);
typedef signed long (*T_pf_MaSound_Initialize)(void);
typedef signed long (*T_pf_MaSound_DeviceControl)(unsigned char p1, unsigned char p2, unsigned char p3, unsigned char p4);
typedef signed long (*T_pf_MaSound_Create)(unsigned char srm_id);
typedef signed long (*T_pf_MaSound_Load)(signed long func_id, unsigned char* file_ptr, unsigned long file_size, unsigned char mode, signed long (*func)(unsigned char id), void* ext_args);
typedef signed long (*T_pf_MaSound_Open)(signed long func_id, signed long file_id, unsigned short open_mode, void* ext_args);
typedef signed long (*T_pf_MaSound_Control)(signed long func_id, signed long file_id, unsigned char ctrl_num, void* prm, void* ext_args);
typedef signed long (*T_pf_MaSound_Standby)(signed long func_id, signed long file_id, void* ext_args);
typedef signed long (*T_pf_MaSound_Seek)(signed long func_id, signed long file_id, unsigned long pos, unsigned char flag, void* ext_args);
typedef signed long (*T_pf_MaSound_Start)(signed long func_id, signed long file_id, unsigned short play_mode, void* ext_args);
typedef signed long (*T_pf_MaSound_Pause)(signed long func_id, signed long file_id, void* ext_args);
typedef signed long (*T_pf_MaSound_Restart)(signed long func_id, signed long file_id, void* ext_args);
typedef signed long (*T_pf_MaSound_Stop)(signed long func_id, signed long file_id, void* ext_args);
typedef signed long (*T_pf_MaSound_Close)(signed long func_id, signed long file_id, void* ext_args);
typedef signed long (*T_pf_MaSound_Unload)(signed long func_id, signed long file_id, void* ext_args);
typedef signed long (*T_pf_MaSound_Delete)(signed long func_id);

// this is modelled after "dummy_End()", as there was no MaSound_End in the MA3 middleware...
typedef signed long (*T_pf_MaSound_End)(void);

//------------------------------------------------------------------------------------------------------------

T_pf_MaSound_Initialize	pf_MaSound_Initialize;
T_pf_MaSound_Create		pf_MaSound_Create;
T_pf_MaSound_Load		pf_MaSound_Load;
T_pf_MaSound_Open		pf_MaSound_Open;
T_pf_MaSound_Control	pf_MaSound_Control;
T_pf_MaSound_Standby	pf_MaSound_Standby;
T_pf_MaSound_Start		pf_MaSound_Start;
T_pf_MaSound_Stop		pf_MaSound_Stop;
T_pf_MaSound_Close		pf_MaSound_Close;
T_pf_MaSound_Unload		pf_MaSound_Unload;
T_pf_MaSound_Delete		pf_MaSound_Delete;
T_pf_Phrase_Terminate	pf_Phrase_Terminate;
T_pf_MaSound_End		pf_MaSound_End;

const char ORIGINAL_MA3_DLL[] = "original-ma3smwemu.dll";

HMODULE h_originalMa3Dll = NULL;

#define DBG_SIZE 128
char dbgBuf[DBG_SIZE + 1];

//------------------------------------------------------------------------------------------------------------

void putToFile(char* dbgString)
{
	HANDLE hFile;
	DWORD dwBytesToWrite = (DWORD)strlen(dbgString);
	DWORD dwBytesWritten = 0;
	BOOL bErrorFlag = FALSE;


	hFile = CreateFile("dbg.txt", // name of the write
		GENERIC_WRITE,          // open for writing
		0,                      // do not share
		NULL,                   // default security
		OPEN_ALWAYS,
		FILE_ATTRIBUTE_NORMAL,  // normal file
		NULL);                  // no attr. template

	if (hFile == INVALID_HANDLE_VALUE)
	{
		return;
	}

	SetFilePointer(hFile, 0, NULL, FILE_END);


	bErrorFlag = WriteFile(
		hFile,           // open file handle
		dbgString,      // start of data to write
		dwBytesToWrite,  // number of bytes to write
		&dwBytesWritten, // number of bytes that were written
		NULL);            // no overlapped structure

	CloseHandle(hFile);
}

char hexTable[] = "0123456789ABCDEF";

//------------------------------------------------------------------------------------------------------------

void dbg_DumpBuffer(const void* ptr, int size)
{
#define _PER_LINE 16
#define _PER_LINE_STR (_PER_LINE + 1)
#define _PER_LINE_HEX ((_PER_LINE * 3) + 1)

	char str[_PER_LINE_STR], hex[_PER_LINE_HEX];

	unsigned char currentChar;
	
	int i = 0, j = 0;
	const unsigned char* buf = (const unsigned char*)ptr;

	for (i = j = 0; size-- > 0; ++buf)
	{
		currentChar = *buf;
		//sprintf_s(hex + (i * 3), _PER_LINE_HEX, "%02.2X ", currentChar);
		hex[i * 3] = hexTable[(currentChar >> 4) & 0x0F];
		hex[i * 3 + 1] = hexTable[currentChar & 0x0F];
		hex[i * 3 + 2] = ' ';

		if ((currentChar != '%') && isprint(currentChar))
			str[i] = currentChar;
		else
			str[i] = '.';

		i++;

		if (i >= _PER_LINE)
		{
			str[i] = 0x00;
			hex[i * 3] = 0x00;
			sprintf_s(dbgBuf, DBG_SIZE, "%4d: %s %s\n", j, hex, str);
			putToFile(dbgBuf);

			j += _PER_LINE;
			i = 0;
		}
	}

	if (i)
	{
		str[i] = 0x00;
		while (i < _PER_LINE)
		{
			//sprintf_s(hex + (i*3), _PER_LINE_HEX, "   ");
			hex[i * 3] = ' ';
			hex[i * 3 + 1] = ' ';
			hex[i * 3 + 2] = ' ';

			i++;
		}
		hex[i * 3] = 0x00;

		sprintf_s(dbgBuf, DBG_SIZE, "%4d: %s %s\n", j, hex, str);
		putToFile(dbgBuf);
	}

}

//------------------------------------------------------------------------------------------------------------

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	{
		h_originalMa3Dll		= LoadLibrary(ORIGINAL_MA3_DLL);

		if (h_originalMa3Dll == NULL)
		{
			return FALSE;
		}
		else
		{
			pf_MaSound_Initialize = (T_pf_MaSound_Initialize)GetProcAddress(h_originalMa3Dll, "MaSound_Initialize");
			pf_MaSound_Create = (T_pf_MaSound_Create)GetProcAddress(h_originalMa3Dll, "MaSound_Create");
			pf_MaSound_Load = (T_pf_MaSound_Load)GetProcAddress(h_originalMa3Dll, "MaSound_Load");
			pf_MaSound_Open = (T_pf_MaSound_Open)GetProcAddress(h_originalMa3Dll, "MaSound_Open");
			pf_MaSound_Control = (T_pf_MaSound_Control)GetProcAddress(h_originalMa3Dll, "MaSound_Control");
			pf_MaSound_Standby = (T_pf_MaSound_Standby)GetProcAddress(h_originalMa3Dll, "MaSound_Standby");
			pf_MaSound_Start = (T_pf_MaSound_Start)GetProcAddress(h_originalMa3Dll, "MaSound_Start");
			pf_MaSound_Stop = (T_pf_MaSound_Stop)GetProcAddress(h_originalMa3Dll, "MaSound_Stop");
			pf_MaSound_Close = (T_pf_MaSound_Close)GetProcAddress(h_originalMa3Dll, "MaSound_Close");
			pf_MaSound_Unload = (T_pf_MaSound_Unload)GetProcAddress(h_originalMa3Dll, "MaSound_Unload");
			pf_MaSound_Delete = (T_pf_MaSound_Delete)GetProcAddress(h_originalMa3Dll, "MaSound_Delete");
			pf_Phrase_Terminate = (T_pf_Phrase_Terminate)GetProcAddress(h_originalMa3Dll, "Phrase_Terminate");
			pf_MaSound_End = (T_pf_MaSound_End)GetProcAddress(h_originalMa3Dll, "MaSound_End");

			if(((int)pf_MaSound_Initialize | 
				(int)pf_MaSound_Create |
				(int)pf_MaSound_Load |
				(int)pf_MaSound_Open |
				(int)pf_MaSound_Control |
				(int)pf_MaSound_Standby |
				(int)pf_MaSound_Start |
				(int)pf_MaSound_Stop |
				(int)pf_MaSound_Close |
				(int)pf_MaSound_Unload |
				(int)pf_MaSound_Delete |
				(int)pf_Phrase_Terminate |
				(int)pf_MaSound_End) == 0
			)
			{
				return FALSE;
			}

		}
	}

    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

//------------------------------------------------------------------------------------------------------------

MA3SMWEMU_API int Phrase_Initialize(void)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_Initialize\n");
	putToFile(dbgBuf);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_Terminate(void)
{
	int ret = pf_Phrase_Terminate();
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) Phrase_Terminate\n", ret);
	putToFile(dbgBuf);
	return ret;
}

MA3SMWEMU_API int Phrase_GetInfo(struct info* dat)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_GetInfo[0x%X] \n", dat);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_CheckData(unsigned char* data, unsigned long len)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_CheckData [0x%X 0x%X] \n", data, len);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_SetData(int ch, unsigned char* data, unsigned long len, int check)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_SetData [%d 0x%X 0x%X %d] \n", ch, data, len, check);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_Seek(int ch, long pos)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_Seek [%d 0x%X] \n", ch, pos);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_Play(int ch, int loop)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_Play [%d %d] \n", ch, loop);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_Stop(int ch)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_Stop [%d] \n", ch);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_Pause(int ch)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_Pause [%d] \n", ch);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_Restart(int ch)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_Restert [%d] \n", ch);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_Kill(void)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_Kill\n");
	return MASMW_SUCCESS;
}

MA3SMWEMU_API void Phrase_SetVolume(int ch, int vol)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_SetVolume [%d %d] \n", ch, vol);
	
}

MA3SMWEMU_API int Phrase_GetVolume(int ch)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_GetVolume [%d] \n", ch);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API void Phrase_SetPanpot(int ch, int vol)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_SetPanpot [%d %d] \n", ch, vol);
}

MA3SMWEMU_API int Phrase_GetPanpot(int ch)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_GetPanpot [%d] \n", ch);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_GetStatus(int ch)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_GetStatus [%d] \n", ch);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API long Phrase_GetPosition(int ch)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_GetPosition [%d] \n", ch);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API long Phrase_GetLength(int ch)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_GetLength [%d] \n", ch);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_RemoveData(int ch)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_RemoveData[%d] \n", ch);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_SetEvHandler(void (*func)(struct event*))
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_SetEvHandler\n");
	return MASMW_SUCCESS;
}

MA3SMWEMU_API int Phrase_SetLink(int ch, unsigned long slave)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_SetLink\n");
	return MASMW_SUCCESS;
}

MA3SMWEMU_API unsigned long Phrase_GetLink(int ch)
{
	sprintf_s(dbgBuf, DBG_SIZE, "Phrase_GetLink\n");
	return MASMW_SUCCESS;
}

//------------------------------------------------------------------------------------------------------------

MA3SMWEMU_API signed long MaSound_Initialize(void)
{
	signed long ret = pf_MaSound_Initialize();
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_Initialize\n", ret);
	putToFile(dbgBuf);
	return ret;
}


MA3SMWEMU_API signed long MaSound_DeviceControl(unsigned char p1, unsigned char p2,	unsigned char p3, unsigned char p4) 
{
	sprintf_s(dbgBuf, DBG_SIZE, "MaSound_DeviceControl: cmd=%d p1=%d p2=%d p3=%d\n", p1, p2, p3, p4);
	return MASMW_SUCCESS;
}

MA3SMWEMU_API signed long MaSound_Create(unsigned char srm_id)
{
	signed long ret = pf_MaSound_Create(srm_id);
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_Create: cnv_id=%d\n", ret, srm_id);
	putToFile(dbgBuf);
	return ret;
}


MA3SMWEMU_API signed long MaSound_Load(signed long func_id, unsigned char* file_ptr, unsigned long file_size, unsigned char mode, signed long (*func)(unsigned char id), void* ext_args)
{
	signed long ret = pf_MaSound_Load(func_id, file_ptr, file_size, mode, func, ext_args);
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_Load: id=%ld\n", ret, func_id);
	putToFile(dbgBuf);

	dbg_DumpBuffer(file_ptr, file_size);

	return ret;
}


MA3SMWEMU_API signed long MaSound_Open(signed long func_id, signed long file_id, unsigned short open_mode, void* ext_args)
{
	signed long ret = pf_MaSound_Open(func_id, file_id, open_mode, ext_args);
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_Open: id=%ld hd=%ld md=%hd\n", ret, func_id, file_id, open_mode);
	putToFile(dbgBuf);
	return ret;
}


MA3SMWEMU_API signed long MaSound_Control(signed long func_id, signed long file_id, unsigned char ctrl_num, void* prm, void* ext_args)
{
	signed long ret = pf_MaSound_Control(func_id, file_id, ctrl_num, prm,ext_args);
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_Control: id=%ld hd=%ld cn=%d\n", ret, func_id, file_id, ctrl_num);
	putToFile(dbgBuf);
	return ret;
}


MA3SMWEMU_API signed long MaSound_Standby(signed long func_id, signed long file_id, void* ext_args)
{
	signed long ret = pf_MaSound_Standby(func_id, file_id, ext_args);
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_Standby: id=%ld hd=%ld\n", ret, func_id, file_id);
	putToFile(dbgBuf);
	return ret;
}


MA3SMWEMU_API signed long MaSound_Seek(signed long func_id, signed long file_id, unsigned long pos, unsigned char flag, void* ext_args)
{
	sprintf_s(dbgBuf, DBG_SIZE, "MaSound_Seek: id=%ld hd=%ld pos=%ld fg=%d\n", func_id, file_id, pos, flag);
	return MASMW_SUCCESS;
}


MA3SMWEMU_API signed long MaSound_Start(signed long func_id, signed long file_id, unsigned short play_mode, void* ext_args)
{
	signed long ret = pf_MaSound_Start(func_id, file_id, play_mode, ext_args);
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_Start: id=%ld hd=%ld pm=%d\n", ret, func_id, file_id, play_mode);
	putToFile(dbgBuf);
	return ret;
}


MA3SMWEMU_API signed long MaSound_Pause(signed long func_id, signed long file_id, void* ext_args)
{
	sprintf_s(dbgBuf, DBG_SIZE, "MaSound_Pause: id=%ld hd=%ld\n", func_id, file_id);
	return MASMW_SUCCESS;
}


MA3SMWEMU_API signed long MaSound_Restart(signed long func_id, signed long file_id, void* ext_args)
{
	sprintf_s(dbgBuf, DBG_SIZE, "MaSound_Restart: id=%ld, hd=%ld\n", func_id, file_id);
	return MASMW_SUCCESS;
}


MA3SMWEMU_API signed long MaSound_Stop(signed long func_id, signed long file_id, void* ext_args)
{
	signed long ret = pf_MaSound_Stop(func_id, file_id, ext_args);
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_Stop: id=%ld hd=%ld\n", ret, func_id, file_id);
	putToFile(dbgBuf);
	return ret;
}


MA3SMWEMU_API signed long MaSound_Close(signed long func_id, signed long file_id, void* ext_args)
{
	signed long ret = pf_MaSound_Close(func_id, file_id, ext_args);
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_Close: id=%ld hd=%ld\n", ret, func_id, file_id);
	putToFile(dbgBuf);
	return ret;
}


MA3SMWEMU_API signed long MaSound_Unload(signed long func_id, signed long file_id, void* ext_args)
{
	signed long ret = pf_MaSound_Unload(func_id, file_id, ext_args);
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_Unload: id=%ld hd=%ld\n", ret, func_id, file_id);
	putToFile(dbgBuf);
	return ret;
}


MA3SMWEMU_API signed long MaSound_Delete(signed long func_id)
{
	signed long ret = pf_MaSound_Delete(func_id);
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_Delete: id=%ld\n", ret, func_id);
	putToFile(dbgBuf);
	return ret;
}

MA3SMWEMU_API signed long MaSound_End(void)
{
	signed long ret = pf_MaSound_End();
	sprintf_s(dbgBuf, DBG_SIZE, "(%d) MaSound_End\n", ret);
	putToFile(dbgBuf);
	return ret;
}



