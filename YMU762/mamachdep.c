/****************************************************************************
 *																			*
 *		Copyright (C) 2001	YAMAHA CORPORATION. All rights reserved.		*
 *																			*
 *		Module		: mamachdep.c											*
 *																			*
 *		Description	: machine dependent part for MA SMW						*
 *																			*
 * 		Version		: 1.3.4.0	2001.12.14									*
 *																			*

Modefied by Kenny to support both MA-3 and  MA-3L2

 ****************************************************************************/

#include "mamachdep.h"
#include "madefs.h"
#include "..\inc\kb_debug.h"

extern void delay_ms(volatile unsigned long int d);

/****************************************************************************
 *	machdep_memcpy
 *
 *
 ****************************************************************************/
void machdep_memcpy( UINT8 *dst_ptr, UINT8 *src_ptr, UINT32 size )
{
	while ( size-- != 0 )
	{
		*dst_ptr++ = *src_ptr++;
	}
}
/****************************************************************************
 *	machdep_Wait
 *
 *
 ****************************************************************************/
void machdep_Wait( UINT32 wait_time )
{
#if 1
  volatile UINT32 d=(wait_time*100)/1000; //ns
  while(d--);
#else
    HAL_Delay(wait_time);
#endif
}
/****************************************************************************
 *	machdep_WriteStatusFlagReg
 *
 *	Function:
 *			Write a byte data to the status flag register.
 *	Arguments:
 *			data	byte data for write
 *	Return:
 *			None
 *
*************************************************************************/
void machdep_WriteStatusFlagReg( UINT8	data )
{
	/*----------------------------------------------------------------------*
	 *----------------------------------------------------------------------*/

	printf("      machdep_WriteStatusFlagReg:%02X (EMULATED !)\n", data);

#ifdef REAL_HW_MA3
	MA_STATUS_REG = data;

    AddEventToBuffer(0, 0, data);

	// YMU762C_MA-3L2
	machdep_Wait( 600 );
#endif
}
/****************************************************************************
 *	machdep_ReadStausFlagReg
 *
 *	Function:
 *			Read a byte data from the status flag register.
 *	Arguments:
 *			data	byte data for write
 *	Return:
 *			status register value
 *
 ****************************************************************************/
UINT8 machdep_ReadStatusFlagReg( void )
{
	UINT8	data = 0;

	printf("      machdep_ReadStatusFlagReg (EMULATED !)\n");

#ifdef REAL_HW_MA3

	/*----------------------------------------------------------------------*
	 *----------------------------------------------------------------------*/

	data = MA_STATUS_REG;

    AddEventToBuffer(1, 0, data);

	machdep_Wait( 70 );
#endif 
	return data;
}
/****************************************************************************
 *	machdep_WriteDataReg
 *
 *	Function:
 *			Write a byte data to the MA-3 write data register.
 *	Arguments:
			data	byte data for write
 *	Return:
 *			none
 *
 ****************************************************************************/
void machdep_WriteDataReg( UINT8 data )
{
	/*----------------------------------------------------------------------*
	 *----------------------------------------------------------------------*/

	printf("      machdep_WriteDataReg:%02X (EMULATED !)\n", data);

#ifdef REAL_HW_MA3
	MA_DATA_REG = data;

    AddEventToBuffer(0, 1, data);

	// YMU762C_MA-3L2
	machdep_Wait( 600 );
#endif

}
/****************************************************************************
 * machdep_ReadDataReg
 *
 *	Function:
 *			Read a byte data from the MA-3 read data register.
 *	Arguments:
			None
 *	Return:
 *			read data
 *
 ****************************************************************************/
UINT8 machdep_ReadDataReg( void )
{
	UINT8	data = 0;

	printf("      machdep_ReadDataReg (EMULATED !)\n");

#ifdef REAL_HW_MA3
	/*----------------------------------------------------------------------*
	 *----------------------------------------------------------------------*/

	data = MA_DATA_REG;

    AddEventToBuffer(1, 1, data);

	machdep_Wait( 70 );
#endif

	return data;
}
/****************************************************************************
 *	machdep_CheckStauts
 *
 *	Function:
 *			Check status of the MA-3.
 *	Arguments:
			flag	check flag
 *	Return:
 *			0		success
 *			-1		time out
 *
 ****************************************************************************/
SINT32 machdep_CheckStatus( UINT8 flag )
{
	printf("      machdep_CheckStatus:%02X (EMULATED !)\n", flag);

#ifdef REAL_HW_MA3
	UINT8	read_data;

	AddEventToBuffer_SpecialFlag(LOGMA3_CHECK_STATUS);

	do
	{
		read_data = machdep_ReadStatusFlagReg();

#if 0
		if ( /* time */ > MA_STATUS_TIMEOUT )
		{
			/* timeout: stop timer */
			return MASMW_ERROR;
		}
#endif

	}
	while ( ( read_data & flag ) != 0 );
#endif

	return MASMW_SUCCESS;
}
/****************************************************************************
 *	machdep_WaitValidData
 *
 *	Function:
 *			Check status of the MA-3.
 *	Arguments:
			flag	check flag
 *	Return:
 *			0		success
 *			-1		time out
 *
 ****************************************************************************/
SINT32 machdep_WaitValidData( UINT8 flag )
{
	printf("      machdep_WaitValidData:%02X (EMULATED !)\n", flag);

#ifdef REAL_HW_MA3
	UINT8	read_data;

	AddEventToBuffer_SpecialFlag(LOGMA3_WAIT_VALID_DATA);

	do
	{
		read_data = machdep_ReadStatusFlagReg();

#if 0
		if ( /* time */ > MA_STATUS_TIMEOUT )
		{
			/* timeout: stop timer */
			return MASMW_ERROR;
		}
#endif

	}
	while ( ( read_data & flag ) == 0 );
#endif

	return MASMW_SUCCESS;
}
/****************************************************************************
 *	machdep_Sleep
 *
 *
 ****************************************************************************/
void machdep_Sleep( UINT32 sleep_time )
{
 delay_ms(sleep_time); //ms
}
/****************************************************************************
 *	machdep_CheckDelayedFifoEmpty
 *
 *	Function:
 *			Check Delayed FIFO Empty Flag
 *	Arguments:

 *	Return:
 *			0		not Empty
 *			1		Empty
 *
 ****************************************************************************/
SINT32 machdep_CheckDelayedFifoEmpty( void )
{
	int ret = 1;
	printf("      machdep_CheckDelayedFifoEmpty (EMULATED !) ret:%02X\n", ret);
	return ret;
	
#ifdef REAL_HW_MA3
	UINT32 flag;

	AddEventToBuffer_SpecialFlag(LOGMA3_CHECK_DELAYED_FIFO_EMPTY);

	flag = 0;
	if( machdep_ReadStatusFlagReg()&MA_EMP_DW ) flag |= 0x01;
	if( machdep_ReadStatusFlagReg()&MA_EMP_DW ) flag |= 0x02;

	if( flag==0 ) return 0;
	else if( flag==0x03 ) return 1;

	flag = 0;
	if( machdep_ReadStatusFlagReg()&MA_EMP_DW ) flag |= 0x01;
	if( machdep_ReadStatusFlagReg()&MA_EMP_DW ) flag |= 0x02;
	if( flag==0 ) return 0;
	else return 1;
#endif
}

/****************************************************************************
 *	machdep_WaitDelayedFifoEmpty
 *
 *	Function:
 *			Wait untill Delayed FIFO Empty
 *	Arguments:

 *	Return:
 *			0		success
 *			-1		time out
 *
 ****************************************************************************/
SINT32 machdep_WaitDelayedFifoEmpty( void )
{

	printf("      machdep_WaitDelayedFifoEmpty (EMULATED !)\n");

#ifdef REAL_HW_MA3
	UINT32 read_data;

	AddEventToBuffer_SpecialFlag(LOGMA3_WAIT_DELAYED_FIFO_EMPTY);

	do
	{
		read_data = machdep_CheckDelayedFifoEmpty();

#if 0
		if ( /* time */ > MA_STATUS_TIMEOUT )
		{
			/* timeout: stop timer */
			return MASMW_ERROR;
		}
#endif

	}
	while ( read_data==0 );
#endif

	return MASMW_SUCCESS;

}

/****************************************************************************
 *	machdep_WaitImmediateFifoEmpty
 *
 *	Function:
 *			Wait untill Immediate FIFO Empty
 *	Arguments:

 *	Return:
 *			0		success
 *			-1		time out
 *
 ****************************************************************************/
SINT32 machdep_WaitImmediateFifoEmpty( void )
{
	printf("      machdep_WaitImmediateFifoEmpty (EMULATED !)\n");

#ifdef REAL_HW_MA3
	UINT8 read_data;

    AddEventToBuffer_SpecialFlag(LOGMA3_WAIT_IMMEDIATE_FIFO_EMPTY);

	do
	{
		read_data = machdep_ReadStatusFlagReg();

#if 0
		if ( /* time */ > MA_STATUS_TIMEOUT )
		{
			/* timeout: stop timer */
			return MASMW_ERROR;
		}
#endif

	} while( (read_data&MA_EMP_W)==0 );
#endif

	return MASMW_SUCCESS;

}
