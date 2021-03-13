#pragma once

/*
* 
MaSound_Initialize
MaDevDrv_Initialize
    MaDevDrv_AddIntFunc: 0
    MaDevDrv_AddIntFunc: 1
    MaDevDrv_AddIntFunc: 2
    MaDevDrv_AddIntFunc: 3
    MaDevDrv_AddIntFunc: 4
    MaDevDrv_AddIntFunc: 5
    MaDevDrv_AddIntFunc: 6
    MaDevDrv_AddIntFunc: 7
MaDevDrv_InitRegisters:
      machdep_WriteStatusFlagReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:07 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:09 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:0A (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:0F (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:01 (EMULATED !)
      machdep_WriteStatusFlagReg:0B (EMULATED !)
      machdep_WriteDataReg:03 (EMULATED !)
      machdep_WriteStatusFlagReg:0C (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:02 (EMULATED !)
      machdep_WriteStatusFlagReg:05 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:06 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:0A (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:0D (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
  MaDevDrv_DeviceControl: cmd=7 p1=2 p2=9 p3=0
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:01 (EMULATED !)
      machdep_WriteStatusFlagReg:05 (EMULATED !)
      machdep_WriteDataReg:02 (EMULATED !)
      machdep_WriteStatusFlagReg:06 (EMULATED !)
      machdep_WriteDataReg:09 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaDevDrv_PowerManagement: mode=1
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:05 (EMULATED !)
      machdep_WriteDataReg:0E (EMULATED !)
      machdep_WriteStatusFlagReg:06 (EMULATED !)
      machdep_WriteDataReg:3E (EMULATED !)
      machdep_WriteStatusFlagReg:05 (EMULATED !)
      machdep_WriteDataReg:0C (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
MaDevDrv_VerifyRegisters: (EMULATED !)
      machdep_WriteStatusFlagReg:05 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:06 (EMULATED !)
      machdep_WriteDataReg:04 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
  MaDevDrv_DeviceControl: cmd=8 p1=3 p2=3 p3=3
    MaDevDrv_SendDirectPacket: pt=0041F4B4, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:63 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:BF (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaResMgr_Initialize
MaSndDrv_Initialize:
 PhrAudCnv_Initialize
MaSound_DeviceControl: cmd=3 p1=0 p2=31 p3=31
MaSndDrv_DeviceControl: cmd=3 p1=0 p2=31 p3=31
  MaDevDrv_DeviceControl: cmd=3 p1=0 p2=31 p3=31
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:08 (EMULATED !)
      machdep_WriteDataReg:1F (EMULATED !)
      machdep_WriteStatusFlagReg:09 (EMULATED !)
      machdep_WriteDataReg:1F (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSound_DeviceControl: cmd=2 p1=0 p2=0 p3=0
MaSndDrv_DeviceControl: cmd=2 p1=0 p2=0 p3=0
  MaDevDrv_DeviceControl: cmd=2 p1=0 p2=0 p3=0
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:07 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSound_DeviceControl: cmd=4 p1=0 p2=0 p3=0
MaSndDrv_DeviceControl: cmd=4 p1=0 p2=0 p3=0
  MaDevDrv_DeviceControl: cmd=4 p1=0 p2=0 p3=0
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:0A (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSound_Create: cnv_id=1
 ... MaMmfCnv_Initialize Fin
MaSound_Load: id=1
 ... MaMmfCnv_Load Fin  errorflag 1
MaSound_Open: id=1 hd=1 md=0
MaSndDrv_Create: st=0 tm=4 cm=12 rm=0 sa=0
    MaResMgr_AllocSequencer  : id=0 -> sq_map=00000001
    MaDevDrv_SendDirectPacket: pt=0041F2C8, sz=5
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:5E (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:1B (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:84 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
    MaResMgr_AllocTimer      : id=2 bt=0 tm=100 md=1 os=0    MaDevDrv_SendDirectPacket: pt=0041F2BC, sz=4
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:57 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:85 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
 -> tm_map=00000004
    MaResMgr_AllocCh         : ch_map=0000FFFF -> ch_map=0000FFFF
    MaResMgr_AllocFmVoice    : fm_map=0000FFFF -> fm_map=0000FFFF
    MaResMgr_AllocFmVoice    : fm_map=00000000 -> fm_map=0000FFFF
    MaResMgr_AllocWtVoice    : wt_map=000000FF -> wt_map=000000FF
    MaResMgr_AllocRam        : rb_map=000000FF -> rb_map=000000FF
    MaResMgr_AllocStreamAudio: sa_map=00000000
    MaResMgr_AllocLed        : ld_map=00000001 -> ld_map=00000001
    MaResMgr_AllocMotor      : mt_map=00000001 -> mt_map=00000001
MaDevDrv_ClearFifo
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:28 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
    MaDevDrv_SendDirectPacket: pt=01139028, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:60 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:84 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
    MaDevDrv_SendDirectRamData: adrs=4000 type=0 ptr=011352E8 size=16
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:90 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:C9 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:91 (EMULATED !)
      machdep_WriteDataReg:9A (EMULATED !)
      machdep_WriteDataReg:F2 (EMULATED !)
      machdep_WriteDataReg:4A (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:06 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:87 (EMULATED !)
      machdep_WriteDataReg:FF (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:21 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetVoice: id=0 bn=0 pb=115 sy=1 key=0 ad=00004000
MaSndDrv_SetVolume: id=0 vl=100
 ... MaMmfCnv_Open Fin  returnvalue 0
MaSound_Control: id=1 hd=1 cn=0
MaSndDrv_SetVolume: id=0 vl=127
MaSound_Standby: id=1 hd=1
    MaDevDrv_SendDirectRamData: adrs=4010 type=0 ptr=0041F2FD size=30
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:10 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:9E (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:79 (EMULATED !)
      machdep_WriteDataReg:45 (EMULATED !)
      machdep_WriteDataReg:43 (EMULATED !)
      machdep_WriteDataReg:47 (EMULATED !)
      machdep_WriteDataReg:AF (EMULATED !)
      machdep_WriteDataReg:A1 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteDataReg:07 (EMULATED !)
      machdep_WriteDataReg:42 (EMULATED !)
      machdep_WriteDataReg:54 (EMULATED !)
      machdep_WriteDataReg:BF (EMULATED !)
      machdep_WriteDataReg:14 (EMULATED !)
      machdep_WriteDataReg:01 (EMULATED !)
      machdep_WriteDataReg:10 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:63 (EMULATED !)
      machdep_WriteDataReg:47 (EMULATED !)
      machdep_WriteDataReg:BF (EMULATED !)
      machdep_WriteDataReg:84 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:60 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:53 (EMULATED !)
      machdep_WriteDataReg:54 (EMULATED !)
      machdep_WriteDataReg:DF (EMULATED !)
      machdep_WriteDataReg:14 (EMULATED !)
      machdep_WriteDataReg:01 (EMULATED !)
      machdep_WriteDataReg:10 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetVoice: id=0 bn=2 pb=12 sy=1 key=0 ad=00004010
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=0 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=0 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:10 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=0 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=0 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:20 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=1 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=1 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:11 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=1 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=1 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:21 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=2 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=2 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:12 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=2 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=2 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:22 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=3 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=3 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:13 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=3 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=3 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:23 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=4 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=4 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:14 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=4 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=4 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:24 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=5 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=5 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:15 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=5 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=5 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:25 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=6 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=6 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:16 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=6 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=6 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:26 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=7 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=7 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:17 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=7 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=7 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:27 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=8 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=8 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:18 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=8 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=8 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:28 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=9 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=9 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:19 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=9 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=9 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:29 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=10 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=10 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1A (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=10 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=10 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2A (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=11 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=11 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1B (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=11 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=11 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2B (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=12 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=12 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1C (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=12 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=12 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2C (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=13 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=13 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1D (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=13 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=13 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2D (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=14 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=14 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1E (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=14 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=14 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2E (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=8 p1=15 p2=0 p3=0
 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=15 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1F (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=9 p1=15 p2=64 p3=0
 MaSndDrv_Panpot: id=0 dt=-1 ch=15 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2F (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=-1 cmd=23 p1=45 p2=0 p3=0
 MaSndDrv_MasterVolume: id=0 dt=-1 vol=45
 MaSndDrv_Nop: id=0 dt=-1 tp=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:66 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
 ... MaMmfCnv_Standby Fin
MaSndDrv_ControlSequencer: id=0 ctrl=4
    MaDevDrv_SendDirectPacket: pt=0041F490, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:58 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SeekControl: id=0
MaDevDrv_ClearFifo
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:28 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
    MaDevDrv_SendDirectPacket: pt=01139028, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:60 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:84 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=24 p1=0 p2=0 p3=0
 MaSndDrv_SystemOn: id=0 dt=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=92
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:10 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:E4 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:20 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:30 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=23 p1=100 p2=0 p3=0
 MaSndDrv_MasterVolume: id=0 dt=0 vol=100
 MaSndDrv_Nop: id=0 dt=0 tp=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=4
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:66 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=6 p1=9 p2=128 p3=0
 MaSndDrv_ProgramChange: id=0 dt=0 ch=9 bn=128 pn=0
MaSndDrv_SetCommand: id=0 dt=0 cmd=6 p1=0 p2=2 p3=12
 MaSndDrv_ProgramChange: id=0 dt=0 ch=0 bn=2 pn=12
  MaDevDrv_DeviceControl: cmd=8 p1=0 p2=0 p3=0
    MaDevDrv_SendDirectPacket: pt=0041F12C, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:63 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
    MaDevDrv_SendDirectPacket: pt=01139018, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:61 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
      machdep_WaitDelayedFifoEmpty (EMULATED !)
    MaDevDrv_SendDirectPacket: pt=0113901C, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:61 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
  MaDevDrv_DeviceControl: cmd=8 p1=3 p2=3 p3=3
    MaDevDrv_SendDirectPacket: pt=0041F12C, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:63 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:BF (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaDevDrv_ClearFifo
      machdep_WriteStatusFlagReg:04 (EMULATED !)
      machdep_WriteDataReg:28 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
    MaDevDrv_SendDirectPacket: pt=01139028, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:60 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:84 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
    MaDevDrv_SendDirectPacket: pt=0041F484, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:58 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:85 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
 ... MaMmfCnv_Seek Fin  returnvalue 0
MaSound_Start: id=1 hd=1 pm=0
 ... MaMmfCnv_Start
MaSndDrv_ControlSequencer: id=0 ctrl=1
MaDevDrv_Fifo: ctrl=2
MaSndDrv_UpdateSequence
MaSndDrv_SetCommand: id=0 dt=0 cmd=30 p1=0 p2=0 p3=0
 MaSndDrv_Nop: id=0 dt=0 tp=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=4
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:66 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=0 p1=0 p2=38 p3=90
 MaSndDrv_NoteOn: id=0 dt=0 ch=0 key=38 vel=90
    MaDevDrv_SendDirectPacket: pt=01142680, sz=21
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:48 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:05 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:90 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:48 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:44 (EMULATED !)
      machdep_WriteDataReg:31 (EMULATED !)
      machdep_WriteDataReg:21 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=750 cmd=3 p1=0 p2=38 p3=0
 MaSndDrv_NoteOff: id=0 dt=750 ch=0 key=38
    MaDevDrv_SendDirectPacket: pt=01142680, sz=5
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:6E (EMULATED !)
      machdep_WriteDataReg:85 (EMULATED !)
      machdep_WriteDataReg:05 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=2500 cmd=12 p1=0 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=2500 ch=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=5
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:44 (EMULATED !)
      machdep_WriteDataReg:93 (EMULATED !)
      machdep_WriteDataReg:05 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:B0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=1 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=1
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=2 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=2
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=3 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=3
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=4 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=4
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=5 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=5
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=6 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=6
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=7 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=7
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=8 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=8
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=9 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=9
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=10 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=10
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=11 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=11
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=12 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=12
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=13 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=13
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=14 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=14
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=15 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=15
MaSndDrv_SetCommand: id=0 dt=0 cmd=29 p1=127 p2=0 p3=0
 MaSndDrv_UserEvent: id=0 dt=0 val=127
    MaDevDrv_SendDirectPacket: pt=01142680, sz=8
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:5D (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:FF (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:59 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:88 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndSeq_ReceiveMessage: id=0 fid=0 msg=128
MaSndDrv_ControlSequencer: id=0 ctrl=2
 ... MaMmfCnv_Stop
MaSndDrv_ControlSequencer: id=0 ctrl=0
 ... MaMmfCnv_Stop Fin  returnvalue 0
MaSndDrv_ControlSequencer: id=0 ctrl=4
 ... MaMmfCnv_Seek Fin  returnvalue 0
 ... MaMmfCnv_Start
MaSndDrv_ControlSequencer: id=0 ctrl=1
 ... MaMmfCnv_Start Fin  returnvalue 0
MaSndDrv_ControlSequencer: id=0 ctrl=3
SendDelayedPacket: ptr=01139224 sz=8
    MaDevDrv_SendDelayedPacket: pt=0113B60B, sz=8
      machdep_WriteStatusFlagReg:01 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:58 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:84 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:58 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:85 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_UpdateSequence
MaSndDrv_SetCommand: id=0 dt=0 cmd=24 p1=0 p2=0 p3=0
 MaSndDrv_SystemOn: id=0 dt=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=92
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:10 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:E4 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:20 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:30 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=23 p1=100 p2=0 p3=0
 MaSndDrv_MasterVolume: id=0 dt=0 vol=100
 MaSndDrv_Nop: id=0 dt=0 tp=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=4
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:66 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=6 p1=9 p2=128 p3=0
 MaSndDrv_ProgramChange: id=0 dt=0 ch=9 bn=128 pn=0
MaSndDrv_SetCommand: id=0 dt=0 cmd=6 p1=0 p2=2 p3=12
 MaSndDrv_ProgramChange: id=0 dt=0 ch=0 bn=2 pn=12
MaSndDrv_SetCommand: id=0 dt=0 cmd=30 p1=0 p2=0 p3=0
 MaSndDrv_Nop: id=0 dt=0 tp=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=4
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:66 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=0 p1=0 p2=38 p3=90
 MaSndDrv_NoteOn: id=0 dt=0 ch=0 key=38 vel=90
    MaDevDrv_SendDirectPacket: pt=01142680, sz=21
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:48 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:0B (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:90 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:48 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:06 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:44 (EMULATED !)
      machdep_WriteDataReg:31 (EMULATED !)
      machdep_WriteDataReg:21 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=750 cmd=3 p1=0 p2=38 p3=0
 MaSndDrv_NoteOff: id=0 dt=750 ch=0 key=38
    MaDevDrv_SendDirectPacket: pt=01142680, sz=5
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:6E (EMULATED !)
      machdep_WriteDataReg:85 (EMULATED !)
      machdep_WriteDataReg:0B (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=2500 cmd=12 p1=0 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=2500 ch=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=5
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:44 (EMULATED !)
      machdep_WriteDataReg:93 (EMULATED !)
      machdep_WriteDataReg:0B (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:B0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=1 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=1
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=2 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=2
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=3 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=3
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=4 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=4
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=5 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=5
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=6 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=6
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=7 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=7
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=8 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=8
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=9 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=9
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=10 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=10
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=11 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=11
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=12 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=12
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=13 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=13
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=14 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=14
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=15 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=15
MaSndDrv_SetCommand: id=0 dt=0 cmd=29 p1=127 p2=0 p3=0
 MaSndDrv_UserEvent: id=0 dt=0 val=127
    MaDevDrv_SendDirectPacket: pt=01142680, sz=8
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:5D (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:FF (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:59 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:88 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndSeq_ReceiveMessage: id=0 fid=0 msg=128
MaSndDrv_ControlSequencer: id=0 ctrl=2
 ... MaMmfCnv_Stop
MaSndDrv_ControlSequencer: id=0 ctrl=0
 ... MaMmfCnv_Stop Fin  returnvalue 0
MaSndDrv_ControlSequencer: id=0 ctrl=4
 ... MaMmfCnv_Seek Fin  returnvalue 0
 ... MaMmfCnv_Start
MaSndDrv_ControlSequencer: id=0 ctrl=1
 ... MaMmfCnv_Start Fin  returnvalue 0
MaSndDrv_ControlSequencer: id=0 ctrl=3
SendDelayedPacket: ptr=01139224 sz=8
    MaDevDrv_SendDelayedPacket: pt=0113B70B, sz=8
      machdep_WriteStatusFlagReg:01 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:58 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:84 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:58 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:85 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_UpdateSequence
MaSndDrv_SetCommand: id=0 dt=0 cmd=24 p1=0 p2=0 p3=0
 MaSndDrv_SystemOn: id=0 dt=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=92
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:10 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:64 (EMULATED !)
      machdep_WriteDataReg:E4 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:20 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:30 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=23 p1=100 p2=0 p3=0
 MaSndDrv_MasterVolume: id=0 dt=0 vol=100
 MaSndDrv_Nop: id=0 dt=0 tp=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=4
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:66 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=6 p1=9 p2=128 p3=0
 MaSndDrv_ProgramChange: id=0 dt=0 ch=9 bn=128 pn=0
MaSndDrv_SetCommand: id=0 dt=0 cmd=6 p1=0 p2=2 p3=12
 MaSndDrv_ProgramChange: id=0 dt=0 ch=0 bn=2 pn=12
MaSndDrv_SetCommand: id=0 dt=0 cmd=30 p1=0 p2=0 p3=0
 MaSndDrv_Nop: id=0 dt=0 tp=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=4
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:66 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=0 p1=0 p2=38 p3=90
 MaSndDrv_NoteOn: id=0 dt=0 ch=0 key=38 vel=90
    MaDevDrv_SendDirectPacket: pt=01142680, sz=21
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:48 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:11 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:90 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:48 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:0C (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:44 (EMULATED !)
      machdep_WriteDataReg:31 (EMULATED !)
      machdep_WriteDataReg:21 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=750 cmd=3 p1=0 p2=38 p3=0
 MaSndDrv_NoteOff: id=0 dt=750 ch=0 key=38
    MaDevDrv_SendDirectPacket: pt=01142680, sz=5
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:6E (EMULATED !)
      machdep_WriteDataReg:85 (EMULATED !)
      machdep_WriteDataReg:11 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=2500 cmd=12 p1=0 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=2500 ch=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=5
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:44 (EMULATED !)
      machdep_WriteDataReg:93 (EMULATED !)
      machdep_WriteDataReg:11 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:B0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=1 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=1
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=2 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=2
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=3 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=3
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=4 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=4
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=5 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=5
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=6 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=6
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=7 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=7
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=8 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=8
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=9 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=9
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=10 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=10
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=11 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=11
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=12 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=12
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=13 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=13
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=14 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=14
MaSndDrv_SetCommand: id=0 dt=0 cmd=12 p1=15 p2=0 p3=0
 MaSndDrv_AllSoundOff: id=0 dt=0 ch=15
MaSndDrv_SetCommand: id=0 dt=0 cmd=29 p1=127 p2=0 p3=0
 MaSndDrv_UserEvent: id=0 dt=0 val=127
    MaDevDrv_SendDirectPacket: pt=01142680, sz=8
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:5D (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:FF (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:59 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:88 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
MaSndSeq_ReceiveMessage: id=0 fid=0 msg=128
MaSndDrv_ControlSequencer: id=0 ctrl=2
 ... MaMmfCnv_Stop
MaSndDrv_ControlSequencer: id=0 ctrl=0
 ... MaMmfCnv_Stop Fin  returnvalue 0
MaSndDrv_ControlSequencer: id=0 ctrl=4
 ... MaMmfCnv_Seek Fin  returnvalue 0
 ... MaMmfCnv_Start
MaSndDrv_ControlSequencer: id=0 ctrl=1
 ... MaMmfCnv_Start Fin  returnvalue 0
MaSndDrv_ControlSequencer: id=0 ctrl=3
SendDelayedPacket: ptr=01139224 sz=8
MaDevDrv_StartSequencer: seq_id=0
      machdep_WriteStatusFlagReg:00 (EMULATED !)
    MaDevDrv_ReceiveData: adrs=354, bufadrs=1
      machdep_WriteStatusFlagReg:03 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:62 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WaitValidData:20 (EMULATED !)
      machdep_WriteStatusFlagReg:22 (EMULATED !)
      machdep_ReadDataReg (EMULATED !)
      machdep_WriteStatusFlagReg:00 (EMULATED !)
    MaDevDrv_SendDirectPacket: pt=0041F228, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:62 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:FF (EMULATED !)
      machdep_WriteStatusFlagReg:00 (EMULATED !)
    MaDevDrv_SendDirectPacket: pt=0113902C, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:61 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteStatusFlagReg:00 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
 ... MaMmfCnv_Start Fin  returnvalue 0
    MaDevDrv_IntHandler
      machdep_WriteStatusFlagReg:00 (EMULATED !)
      machdep_ReadDataReg (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

---------------------------------------------------------------------------------------------------------------


*** Channel Volume ***

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=0 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:10 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=1 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:11 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=2 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:12 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=3 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:13 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=4 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:14 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=5 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:15 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=6 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:16 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=7 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:17 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=8 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:18 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=9 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:19 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=10 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1A (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=11 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1B (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=12 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1C (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=13 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1D (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=14 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1E (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_ChannelVolume: id=0 dt=-1 ch=15 vol=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:1F (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)



*** Pan pot ***

 MaSndDrv_Panpot: id=0 dt=-1 ch=0 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:20 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)
            
 MaSndDrv_Panpot: id=0 dt=-1 ch=1 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:21 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=2 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:22 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=3 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:23 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=4 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:24 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=5 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:25 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=6 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:26 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=7 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:27 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=8 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:28 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=9 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:29 (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=10 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2A (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=11 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2B (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)


 MaSndDrv_Panpot: id=0 dt=-1 ch=12 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2C (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=13 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2D (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=14 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2E (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_Panpot: id=0 dt=-1 ch=15 pan=64
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:2F (EMULATED !)
      machdep_WriteDataReg:81 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)


*** Master Volume ***
 
 MaSndDrv_MasterVolume: id=0 dt=-1 vol=45
 MaSndDrv_Nop: id=0 dt=-1 tp=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=3
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:66 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)

 MaSndDrv_MasterVolume: id=0 dt=0 vol=100
 MaSndDrv_Nop: id=0 dt=0 tp=0
    MaDevDrv_SendDirectPacket: pt=01142680, sz=4
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:66 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)


#define MA_FM_VOICE_ADDRESS				(0)
#define MA_WT_VOICE_ADDRESS				(96)
#define MA_EXT_FM_VOICE_ADDRESS			(224)
#define MA_CHANNEL_VOLUME				(144)
#define MA_CHANNEL_PANPOT				(160)
#define MA_CHANNEL_SUSTAIN				(176)
#define MA_CHANNEL_VIBRATO				(176)
#define MA_CHANNEL_BEND					(192)
#define MA_FM_EXTWAVE_15				(320)
#define MA_FM_EXTWAVE_23				(322)
#define MA_FM_EXTWAVE_31				(324)


 *** Note On ***

    slot_no 0..15   reg_index = (UINT32)(((slot_no -  0) * 6) + MA_FM_VOICE_ADDRESS:0);
    slot_no 16..31  reg_index = (UINT32)(((slot_no - 16) * 6) + MA_EXT_FM_VOICE_ADDRESS:224);
    slot_no 32..39  reg_index = (UINT32)(((slot_no - 32) * 6) + MA_WT_VOICE_ADDRESS:96);

 MaSndDrv_NoteOn: id=0 dt=0 ch=0 key=38 vel=90
    MaDevDrv_SendDirectPacket: pt=01142680, sz=21
      machdep_WriteStatusFlagReg:02 (EMULATED !)
      machdep_WaitImmediateFifoEmpty (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:48 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:05 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:90 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:48 (EMULATED !)
      machdep_WriteDataReg:82 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:00 (EMULATED !)
      machdep_WriteDataReg:80 (EMULATED !)
      machdep_WriteDataReg:40 (EMULATED !)
      machdep_WriteDataReg:08 (EMULATED !)
      machdep_WriteDataReg:44 (EMULATED !)
      machdep_WriteDataReg:31 (EMULATED !)
      machdep_WriteDataReg:21 (EMULATED !)
      machdep_WriteDataReg:C0 (EMULATED !)
      machdep_WriteStatusFlagReg:80 (EMULATED !)



    slot_no 0..15   reg_index = (UINT32)(((slot_no -  0) * 6) + MA_FM_VOICE_ADDRESS:0);
    slot_no 16..31  reg_index = (UINT32)(((slot_no - 16) * 6) + MA_EXT_FM_VOICE_ADDRESS:224);
    slot_no 32..39  reg_index = (UINT32)(((slot_no - 32) * 6) + MA_WT_VOICE_ADDRESS:96);

    // KeyOn
    reg_index += 5;
    MAKE_ADDRESS_PART(seq_id, num, reg_index)                           2: Lo7(reg_index+5), 0x80|Hi(reg_index+5)
    MAKE_RST(seq_id, num, ch)                                           1: 0x80 | (0x10 + ch)
    MAKE_TIMER_PART(seq_id, num, delta_time)                            1: 0x80 (only if delta_time >= 0)

    MAKE_NOP(seq_id, num, (UINT16)MA_NOP_2)                             3: Lo7(MA_NOP_2), 0x80|Hi(MA_NOP_2), 0x80  // MA_NOP_2 = 328
    MAKE_TIMER_PART(seq_id, num, delta_time)

    reg_index -= 5;
    MAKE_ADDRESS_PART(seq_id, num, reg_index)                           2: Lo7(reg_index-5), 0x80|Hi(reg_index-5)
    MAKE_KEY_ON(seq_id, num, voice_info.address, vo_volume, pitch, ch)  6: 7b/Hi7(voice_info.address), Lo7(voice_info.address), vo_volume & 0x7C, 7b/Hi7(pitch), 7b/Lo7(pitch), 0x80|(0x40+ch)


#define MAKE_ADDRESS_PART(seq_id, num, reg_index)					
    packet_buf[seq_id][num++] = (UINT8)(  reg_index       & 0x7F );	
    packet_buf[seq_id][num++] = (UINT8)( (reg_index >> 7) | 0x80 );	

#define MAKE_RST(seq_id, num, ch)
    packet_buf[seq_id][num++] = (UINT8)( (0x10 + ch)  	  | 0x80 );

#define MAKE_TIMER_PART(seq_id, num, delta_time)
if ( delta_time >= 0 )
    packet_buf[seq_id][num++] = (UINT8)( 0x80 );

#define MAKE_NOP(seq_id, num, reg_index)
    packet_buf[seq_id][num++] = (UINT8)(  reg_index       & 0x7F );
    packet_buf[seq_id][num++] = (UINT8)( (reg_index >> 7) | 0x80 );
    packet_buf[seq_id][num++] = (UINT8)(  0x00            | 0x80 );

#define MAKE_KEY_ON(seq_id, num, voice_id, vo_volume, pitch, ch)	
    packet_buf[seq_id][num++] = (UINT8)( (voice_id >> 7)  & 0x7F );	
    packet_buf[seq_id][num++] = (UINT8)(  voice_id        & 0x7F );	
    packet_buf[seq_id][num++] = (UINT8)(  vo_volume       & 0x7C );	
    packet_buf[seq_id][num++] = (UINT8)( (pitch >> 7)     & 0x7F );	
    packet_buf[seq_id][num++] = (UINT8)(  pitch           & 0x7F );	
    packet_buf[seq_id][num++] = (UINT8)( (0x40 + ch)      | 0x80 );	

#define MAKE_KEY_OFF(seq_id, num, ch)								
    packet_buf[seq_id][num++] = (UINT8)(  ch              | 0x80 );	


#define MAKE_VEL_PITCH(seq_id, num, vo_volume, pitch)				
    packet_buf[seq_id][num++] = (UINT8)(  vo_volume       & 0x7C );	
    packet_buf[seq_id][num++] = (UINT8)( (pitch >> 7)     & 0x7F );	
    packet_buf[seq_id][num++] = (UINT8)(  pitch           | 0x80 );	


#define MAKE_PITCH(seq_id, num, pitch)								
    packet_buf[seq_id][num++] = (UINT8)( (pitch >> 7)     & 0x7F );	
    packet_buf[seq_id][num++] = (UINT8)(  pitch           | 0x80 );	

#define MAKE_MUTE(seq_id, num, ch)									
    packet_buf[seq_id][num++] = (UINT8)( (0x20 + ch)  	  | 0x80 );	

    // change velocity & pitch only
    reg_index += 2;
    MAKE_ADDRESS_PART(seq_id, num, reg_index)
    MAKE_VEL_PITCH(seq_id, num, vo_volume, pitch)

    -----------------------------------------------------------------

    bFb	 = (UINT8)((pM2V[3] & 0x38) >> 3);
    bAlg = (UINT8)(pM2V[3] & 0x07);
    if((bAlg & 0x06) == 0)			bNumofOp = 2;
    if(bM2Size < MA2VOICE_4OP_SIZE)	bNumofOp = 2;

    pM3V[0] = (UINT8)(0x80 | (pM2V[4] & 0x03));	//	panpot = 0x10 center
    pM3V[1] = (UINT8)((pM2V[3] & 0xC0) | bAlg);

    pM3V += 2;

    for (bOp = 0; bOp < bNumofOp; bOp++)
    {
        bVib = (UINT8)((pM2V[0] & 0x08) >> 3);
        bEgt = (UINT8)((pM2V[0] & 0x04) >> 2);
        bSus = (UINT8)((pM2V[0] & 0x02) >> 1);
        bKsr = (UINT8)((pM2V[0] & 0x01) >> 0);

        bRR = (UINT8)((pM2V[1] & 0xF0) >> 4);
        bDR = (UINT8)(pM2V[1] & 0x0F);

        bDvb = (UINT8)((pM2V[4] & 0xC0) >> 6);
        bDam = (UINT8)((pM2V[4] & 0x30) >> 4);
        bAm = (UINT8)((pM2V[4] & 0x08) >> 3);
        bWs = (UINT8)((pM2V[4] & 0x07));

        pM3V[0] = (UINT8)((((bEgt) ? 0x00 : bRR) << 4) | 0x04 | bKsr);	//	SR | KSR
        pM3V[1] = (UINT8)(((bSus) ? 0x04 : bRR) << 4 | bDR);			//	RR | DR
        pM3V[2] = pM2V[2];												//	AR | SL
        pM3V[3] = pM2V[3];												//	TL | KSL
        pM3V[4] = (UINT8)(((bDam) << 5) | (bAm << 4) | (bDvb << 1) | (bVib));
        //	DAM | EAM | DVB | EVB
        pM3V[5] = (UINT8)(pM2V[0] & 0xF0);								//	MULTI | DT=0
        pM3V[6] = (UINT8)(((bWs) << 3) | ((bOp == 0) ? bFb : 0x00));	//	WS | FB

        pM3V += 7;
    }

    bFb	3 bits
    bAlg 3 bits   (bAlg & 0x06) == ) ->	bNumofOp = 2


    bVib 1 bit
    bEgt 1 bit
    bSus 1 bit
    bKsr 1 bit

    bRR 4 bits
    bDR 4 bits

    bDvb 2 bits
    bDam 2 bits
    bAm 1 bit
    bWs 3 bits

    00 PANPOT
    01 ALG

    02 ???
    03 ???

    OP1
    04 SR | KSR
    05 RR | DR
    06 AR | SL
    07 TL | KSL
    08 DAM | EAM | DVB | EVB
    09 MULTI | DT=0
    10 WS | FB

    OP2
    11
    12
    13
    14
    15
    16
    17

    OP3
    18
    19
    20
    21
    22
    23
    24

    OP4
    25
    26
    27
    28
    29
    30
    31


+++ So the voices are pushed into the RAM directly (bypassing FIFO) +++
static SINT32	MaPhr_Standby(UINT8 phr_id, void* ext_args)
->
            if(pVi->bType == VOICE_TYPE_MA2) {	//	MA-2 voice type
                dwSize = ConvertMA3Voice(pVi->pbVoice, pVi->bSize, &(bVoiceParam[0]));
                MaDevDrv_SendDirectRamData(dwVocAdr, 0, &(bVoiceParam[0]), dwSize);
            }
            else {								//	MA-3 voice type
                machdep_memcpy(&(bVoiceParam[0]), pVi->pbVoice, pVi->bSize);
                // Prohibit XOF=1
                bVoiceParam[2] = (UINT8)(bVoiceParam[2] & 0xF7);
                bVoiceParam[9] = (UINT8)(bVoiceParam[9] & 0xF7);
                if (pVi->bSize > 16) {
                    bVoiceParam[16] = (UINT8)(bVoiceParam[16] & 0xF7);
                    bVoiceParam[23] = (UINT8)(bVoiceParam[23] & 0xF7);
                }
                MaDevDrv_SendDirectRamData(dwVocAdr, 0, &(bVoiceParam[0]), (UINT32)pVi->bSize);

+++ Freq parameters are sent when playing (see MaSndDrv_NoteOn()) +++
-> MAKE_KEY_ON( seq_id, num, voice_info.address, vo_volume, pitch, ch )

Interesting: there is a way to change volume and pitch while the note is playing
-> MAKE_VEL_PITCH( seq_id, num, vo_volume, pitch )
*/

