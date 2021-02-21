/* Includes ------------------------------------------------------------------*/

#include "..\YMU762\mamachdep.h"
#include "..\YMU762\masound.h"

#include "..\MMF\mmf.h"
#include "..\MMF\mmf2.h"

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

extern void MaDevDrv_IntHandler(void);


void delay_ms(volatile UINT32  d)
{

}


signed long CallBack(unsigned char id)
{

    switch(id)
    {
        case MASMW_REPEAT:
            break;

        case MASMW_END_OF_SEQUENCE:
            break;

        default:
            break;
    }

 return MASMW_SUCCESS;
}

// IRQ handler (well... not on PC)
void irq(void)
{
#ifdef REAL_HW_MA3
    MaDevDrv_IntHandler();
#endif
}


SINT32 func = 0;
SINT32 file = 0;
UINT8 volume = 0;

//#define MMF Marimba_D1
//#define MMF OP1_Marimba_D1_AR_10_11
//#define MMF OP4_Marimba_D1_AR_13_14
//#define MMF MMF_02_YAMAHA_MA3_TEST
#define MMF NINJA2_3_MID
//#define MMF MedivoJJ

int main(void)
{
    MaSound_Initialize();
    MaSound_DeviceControl(MASMW_HP_VOLUME, 0, 31, 31);
    MaSound_DeviceControl(MASMW_EQ_VOLUME, 0, 0, 0);
    MaSound_DeviceControl(MASMW_SP_VOLUME, 0, 0, 0);

    func=MaSound_Create((MMF[1] == 'M') ? MASMW_CNVID_MMF : MASMW_CNVID_MID);   // MMF header: MMMD @ 0x0000, MIDI header: MTHd @ 0x0000
    file=MaSound_Load(func, (UINT8*)MMF, sizeof(MMF), 1, CallBack, NULL);

    MaSound_Open(func,file,0,NULL);

    volume=127; //Max 0 dB
    MaSound_Control(func,file,MASMW_SET_VOLUME,&volume,NULL);

    MaSound_Standby(func,file,NULL);

    MaSound_Start(func,file,0,NULL);    // Play once, loop -> change play_mode to 0

    //while (1)
    for (int i = 0; i < 1; i++)
    {
        MaDevDrv_IntHandler();
    }
}
