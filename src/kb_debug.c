#include <stdio.h>
#include <ctype.h>

#include "..\inc\kb_debug.h"

char hexTable[] = "0123456789ABCDEF";

//------------------------------------------------------------------------------------------------------------

void dbg_DumpBuffer(char* title, const void* ptr, int size)
{
#define _PER_LINE 16
#define _PER_LINE_STR (_PER_LINE + 1)
#define _PER_LINE_HEX ((_PER_LINE * 3) + 1)


	if (title != NULL) {
		printf(title);
		printf("\n");
	}

	char str[_PER_LINE_STR], hex[_PER_LINE_HEX];

	unsigned char currentChar;

	int i = 0, j = 0;
	const unsigned char* buf = (const unsigned char*)ptr;

	for (i = j = 0; size-- > 0; ++buf)
	{
		currentChar = *buf;
		sprintf(hex + (i * 3), "%02.2X ", currentChar);
#if 0
		hex[i * 3] = hexTable[(currentChar >> 4) & 0x0F];
		hex[i * 3 + 1] = hexTable[currentChar & 0x0F];
		hex[i * 3 + 2] = ' ';
#endif

		if ((currentChar != '%') && isprint(currentChar))
			str[i] = currentChar;
		else
			str[i] = '.';

		i++;

		if (i >= _PER_LINE)
		{
			str[i] = 0x00;
			hex[i * 3] = 0x00;
			printf("%4d: %s %s\n", j, hex, str);

			j += _PER_LINE;
			i = 0;
		}
	}

	if (i)
	{
		str[i] = 0x00;
		while (i < _PER_LINE)
		{
			sprintf(hex + (i * 3), "   ");
#if 0
			hex[i * 3] = ' ';
			hex[i * 3 + 1] = ' ';
			hex[i * 3 + 2] = ' ';
#endif

			i++;
		}
		hex[i * 3] = 0x00;

		printf("%4d: %s %s\n", j, hex, str);

	}

}

