/* runtime/hle/hle_table.c -- the single NID -> handler registration table.
 * NIDs are the ones the stub archives export. Keep sorted by
 * module, then by name, with the defining SDK header named per section. */

#include "hle.h"

#define HLE_DECL(fn) void fn(CpuCtx *c, u8 *ram)

/* SysMemUserForUser -- include/sysmem.h */
HLE_DECL(hle_sceKernelSetCompiledSdkVersion);
HLE_DECL(hle_sceKernelSetCompilerVersion);
HLE_DECL(hle_sceKernelTotalFreeMemSize);
HLE_DECL(hle_sceKernelMaxFreeMemSize);
HLE_DECL(hle_sceKernelPrintf);
HLE_DECL(hle_sceKernelAllocPartitionMemory);
HLE_DECL(hle_sceKernelFreePartitionMemory);
HLE_DECL(hle_sceKernelGetBlockHeadAddr);

/* ThreadManForUser -- include/thread.h */
HLE_DECL(hle_sceKernelCreateThread);
HLE_DECL(hle_sceKernelStartThread);
HLE_DECL(hle_sceKernelExitThread);
HLE_DECL(hle_sceKernelExitDeleteThread);
HLE_DECL(hle_sceKernelDeleteThread);
HLE_DECL(hle_sceKernelTerminateDeleteThread);
HLE_DECL(hle_sceKernelWaitThreadEnd);
HLE_DECL(hle_sceKernelDelayThread);
HLE_DECL(hle_sceKernelDelayThreadCB);
HLE_DECL(hle_sceKernelSleepThread);
HLE_DECL(hle_sceKernelSleepThreadCB);
HLE_DECL(hle_sceKernelWakeupThread);
HLE_DECL(hle_sceKernelCancelWakeupThread);
HLE_DECL(hle_sceKernelGetThreadId);
HLE_DECL(hle_sceKernelChangeThreadPriority);
HLE_DECL(hle_sceKernelGetThreadCurrentPriority);
HLE_DECL(hle_sceKernelReferThreadRunStatus);
HLE_DECL(hle_sceKernelCreateSema);
HLE_DECL(hle_sceKernelDeleteSema);
HLE_DECL(hle_sceKernelSignalSema);
HLE_DECL(hle_sceKernelWaitSema);
HLE_DECL(hle_sceKernelWaitSemaCB);
HLE_DECL(hle_sceKernelCreateEventFlag);
HLE_DECL(hle_sceKernelDeleteEventFlag);
HLE_DECL(hle_sceKernelSetEventFlag);
HLE_DECL(hle_sceKernelClearEventFlag);
HLE_DECL(hle_sceKernelWaitEventFlag);
HLE_DECL(hle_sceKernelWaitEventFlagCB);
HLE_DECL(hle_sceKernelReferEventFlagStatus);
HLE_DECL(hle_sceKernelCreateCallback);
HLE_DECL(hle_sceKernelGetSystemTime);
HLE_DECL(hle_sceKernelGetSystemTimeLow);
HLE_DECL(hle_sceKernelGetSystemTimeWide);

/* ModuleMgrForUser -- include/modulemgr.h */
HLE_DECL(hle_sceKernelLoadModule);
HLE_DECL(hle_sceKernelStartModule);
HLE_DECL(hle_sceKernelStopModule);
HLE_DECL(hle_sceKernelUnloadModule);
HLE_DECL(hle_sceKernelGetModuleId);
HLE_DECL(hle_sceKernelGetModuleIdByAddress);
HLE_DECL(hle_sceKernelStopUnloadSelfModuleWithStatus);

/* sceDisplay -- include/displaysvc.h */
HLE_DECL(hle_sceDisplaySetMode);
HLE_DECL(hle_sceDisplaySetFrameBuf);
HLE_DECL(hle_sceDisplayGetFrameBuf);
HLE_DECL(hle_sceDisplayWaitVblankStart);
HLE_DECL(hle_sceDisplayIsVblank);
HLE_DECL(hle_sceDisplayGetVcount);
HLE_DECL(hle_sceDisplayGetCurrentHcount);
HLE_DECL(hle_sceDisplayGetAccumulatedHcount);
HLE_DECL(hle_sceDisplayGetFramePerSec);

/* sceGe_user -- include/geman.h */
HLE_DECL(hle_sceGeListEnQueue);
HLE_DECL(hle_sceGeDrawSync);
HLE_DECL(hle_sceGeSetCallback);
HLE_DECL(hle_sceGeEdramGetAddr);

/* sceMpeg -- include/libmpeg.h */
HLE_DECL(hle_sceMpegAtracDecode);
HLE_DECL(hle_sceMpegAvcDecode);
HLE_DECL(hle_sceMpegAvcDecodeFlush);
HLE_DECL(hle_sceMpegAvcDecodeStop);
HLE_DECL(hle_sceAtracAddStreamData);
HLE_DECL(hle_sceAtracDecodeData);
HLE_DECL(hle_sceAtracGetLoopStatus);
HLE_DECL(hle_sceAtracGetNextDecodePosition);
HLE_DECL(hle_sceAtracGetRemainFrame);
HLE_DECL(hle_sceAtracGetSoundSample);
HLE_DECL(hle_sceAtracGetStreamDataInfo);
HLE_DECL(hle_sceAtracReleaseAtracID);
HLE_DECL(hle_sceAtracResetPlayPosition);
HLE_DECL(hle_sceAtracSetDataAndGetID);
HLE_DECL(hle_sceAtracSetLoopNum);
HLE_DECL(hle_sceMpegCreate);
HLE_DECL(hle_sceMpegDelete);
HLE_DECL(hle_sceMpegFinish);
HLE_DECL(hle_sceMpegFlushAllStream);
HLE_DECL(hle_sceMpegFreeAvcEsBuf);
HLE_DECL(hle_sceMpegGetAtracAu);
HLE_DECL(hle_sceMpegGetAvcAu);
HLE_DECL(hle_sceMpegInit);
HLE_DECL(hle_sceMpegInitAu);
HLE_DECL(hle_sceMpegMallocAvcEsBuf);
HLE_DECL(hle_sceMpegQueryAtracEsSize);
HLE_DECL(hle_sceMpegQueryMemSize);
HLE_DECL(hle_sceMpegQueryStreamOffset);
HLE_DECL(hle_sceMpegQueryStreamSize);
HLE_DECL(hle_sceMpegRegistStream);
HLE_DECL(hle_sceMpegRingbufferAvailableSize);
HLE_DECL(hle_sceMpegRingbufferConstruct);
HLE_DECL(hle_sceMpegRingbufferDestruct);
HLE_DECL(hle_sceMpegRingbufferPut);
HLE_DECL(hle_sceMpegRingbufferQueryMemSize);
HLE_DECL(hle_sceMpegUnRegistStream);

/* StdioForUser */
HLE_DECL(hle_sceKernelStdin);
HLE_DECL(hle_sceKernelStdout);
HLE_DECL(hle_sceKernelStderr);

/* IoFileMgrForUser -- include/iofilemgr.h */
HLE_DECL(hle_sceIoOpen);
HLE_DECL(hle_sceIoOpenAsync);
HLE_DECL(hle_sceIoRead);
HLE_DECL(hle_sceIoReadAsync);
HLE_DECL(hle_sceIoWrite);
HLE_DECL(hle_sceIoClose);
HLE_DECL(hle_sceIoLseek);
HLE_DECL(hle_sceIoLseekAsync);
HLE_DECL(hle_sceIoGetstat);
HLE_DECL(hle_sceIoRename);
HLE_DECL(hle_sceIoDevctl);
HLE_DECL(hle_sceIoWaitAsync);
HLE_DECL(hle_sceIoPollAsync);

/* Kernel_Library / UtilsForUser / InterruptManager */
HLE_DECL(hle_sceKernelCpuSuspendIntr);
HLE_DECL(hle_sceKernelCpuResumeIntr);
HLE_DECL(hle_sceKernelDcacheWritebackAll);
HLE_DECL(hle_sceKernelDcacheWritebackRange);
HLE_DECL(hle_sceKernelSetGPO);
HLE_DECL(hle_sceKernelLibcClock);
HLE_DECL(hle_sceKernelLibcTime);
HLE_DECL(hle_sceKernelLibcGettimeofday);
HLE_DECL(hle_sceKernelRegisterSubIntrHandler);
HLE_DECL(hle_sceKernelReleaseSubIntrHandler);
HLE_DECL(hle_sceKernelEnableSubIntr);

/* sceSuspendForUser / scePower / sceImpose / sceWlanDrv / sceDmac / LoadExec */
HLE_DECL(hle_sceKernelPowerTick);
HLE_DECL(hle_sceKernelPowerLock);
HLE_DECL(hle_sceKernelPowerUnlock);
HLE_DECL(hle_sceKernelVolatileMemLock);
HLE_DECL(hle_sceKernelVolatileMemUnlock);
HLE_DECL(hle_scePowerRegisterCallback);
HLE_DECL(hle_sceImposeSetLanguageMode);
HLE_DECL(hle_sceWlanGetEtherAddr);
HLE_DECL(hle_sceDmacMemcpy);
HLE_DECL(hle_sceKernelExitGame);
HLE_DECL(hle_sceKernelRegisterExitCallback);

/* sceRtc -- include/rtcsvc.h */
HLE_DECL(hle_sceRtcGetTickResolution);
HLE_DECL(hle_sceRtcGetCurrentTick);
HLE_DECL(hle_sceRtcGetCurrentClockLocalTime);
HLE_DECL(hle_sceRtcGetWin32FileTime);
HLE_DECL(hle_sceRtcGetTick);

/* sceSuspendForUser -- include/powersvc.h */
HLE_DECL(hle_sceKernelPowerTick);

/* sceUmdUser -- include/mediaman.h */
HLE_DECL(hle_sceUmdCheckMedium);
HLE_DECL(hle_sceUmdActivate);
HLE_DECL(hle_sceUmdGetDriveStat);
HLE_DECL(hle_sceUmdWaitDriveStat);
HLE_DECL(hle_sceUmdCancelWaitDriveStat);
HLE_DECL(hle_sceUmdRegisterUMDCallBack);

/* sceCtrl -- include/ctrlsvc.h */
HLE_DECL(hle_sceCtrlSetSamplingMode);
HLE_DECL(hle_sceCtrlReadBufferPositive);
HLE_DECL(hle_sceCtrlSetIdleCancelThreshold);
HLE_DECL(hle_sceCtrlGetIdleCancelThreshold);

/* sceSasCore -- include/libsas.h */
HLE_DECL(hle_sceSasInit);
HLE_DECL(hle_sceSasCore);
HLE_DECL(hle_sceSasCoreWithMix);
HLE_DECL(hle_sceSasSetKeyOn);
HLE_DECL(hle_sceSasSetKeyOff);
HLE_DECL(hle_sceSasSetVolume);
HLE_DECL(hle_sceSasSetPitch);
HLE_DECL(hle_sceSasSetVoice);
HLE_DECL(hle_sceSasSetNoise);
HLE_DECL(hle_sceSasSetADSR);
HLE_DECL(hle_sceSasSetADSRmode);
HLE_DECL(hle_sceSasSetSL);
HLE_DECL(hle_sceSasSetSimpleADSR);
HLE_DECL(hle_sceSasGetEndFlag);
HLE_DECL(hle_sceSasGetEnvelopeHeight);
HLE_DECL(hle_sceSasGetPauseFlag);
HLE_DECL(hle_sceSasSetPause);
HLE_DECL(hle_sceSasRevType);
HLE_DECL(hle_sceSasRevEVOL);
HLE_DECL(hle_sceSasRevVON);
HLE_DECL(hle_sceSasRevParam);

/* sceAudio -- include/audiooutput.h + audioerror.h */
HLE_DECL(hle_sceAudioChReserve);
HLE_DECL(hle_sceAudioChRelease);
HLE_DECL(hle_sceAudioOutputBlocking);
HLE_DECL(hle_sceAudioOutputPanned);
HLE_DECL(hle_sceAudioOutputPannedBlocking);
HLE_DECL(hle_sceAudioChangeChannelConfig);
HLE_DECL(hle_sceAudioChangeChannelVolume);
HLE_DECL(hle_sceAudioSetChannelDataLen);
HLE_DECL(hle_sceAudioGetChannelRestLength);

/* sceLibFont -- include/libfont.h */
HLE_DECL(hle_sceFontNewLib);
HLE_DECL(hle_sceFontDoneLib);
HLE_DECL(hle_sceFontFindOptimumFont);
HLE_DECL(hle_sceFontOpen);
HLE_DECL(hle_sceFontClose);
HLE_DECL(hle_sceFontGetFontInfo);
HLE_DECL(hle_sceFontGetCharInfo);
HLE_DECL(hle_sceFontGetCharGlyphImage);

/* sceUtility -- include/utility/utility_sysparam.h */
HLE_DECL(hle_sceUtilityGetSystemParamInt);
HLE_DECL(hle_sceUtilityGetSystemParamString);
HLE_DECL(hle_sceUtilityLoadAvModule);
HLE_DECL(hle_sceUtilityLoadNetModule);
HLE_DECL(hle_sceUtilityUnloadNetModule);
/* sceUtility dialogs -- include/utility/utility_osk.h, _savedata.h */
HLE_DECL(hle_sceUtilityOskInitStart);
HLE_DECL(hle_sceUtilityOskUpdate);
HLE_DECL(hle_sceUtilityOskGetStatus);
HLE_DECL(hle_sceUtilityOskShutdownStart);
HLE_DECL(hle_sceUtilitySavedataInitStart);
HLE_DECL(hle_sceUtilitySavedataUpdate);
HLE_DECL(hle_sceUtilitySavedataGetStatus);
HLE_DECL(hle_sceUtilitySavedataShutdownStart);

const HleEntry g_hle_impl[] = {
    /* SysMemUserForUser -- include/sysmem.h */
    { 0x7591C7DBu, "sceKernelSetCompiledSdkVersion",
      hle_sceKernelSetCompiledSdkVersion },
    { 0xF77D77CBu, "sceKernelSetCompilerVersion",
      hle_sceKernelSetCompilerVersion },
    { 0xF919F628u, "sceKernelTotalFreeMemSize",
      hle_sceKernelTotalFreeMemSize },
    { 0xA291F107u, "sceKernelMaxFreeMemSize",
      hle_sceKernelMaxFreeMemSize },
    { 0x13A5ABEFu, "sceKernelPrintf",             hle_sceKernelPrintf },
    { 0x237DBD4Fu, "sceKernelAllocPartitionMemory",
      hle_sceKernelAllocPartitionMemory },
    { 0xB6D61D02u, "sceKernelFreePartitionMemory",
      hle_sceKernelFreePartitionMemory },
    { 0x9D9A5BA1u, "sceKernelGetBlockHeadAddr",
      hle_sceKernelGetBlockHeadAddr },

    /* ThreadManForUser -- include/thread.h */
    { 0x446D8DE6u, "sceKernelCreateThread", hle_sceKernelCreateThread },
    { 0xF475845Du, "sceKernelStartThread", hle_sceKernelStartThread },
    { 0xAA73C935u, "sceKernelExitThread", hle_sceKernelExitThread },
    { 0x809CE29Bu, "sceKernelExitDeleteThread", hle_sceKernelExitDeleteThread },
    { 0x9FA03CD3u, "sceKernelDeleteThread", hle_sceKernelDeleteThread },
    { 0x383F7BCCu, "sceKernelTerminateDeleteThread", hle_sceKernelTerminateDeleteThread },
    { 0x278C0DF5u, "sceKernelWaitThreadEnd", hle_sceKernelWaitThreadEnd },
    { 0xCEADEB47u, "sceKernelDelayThread", hle_sceKernelDelayThread },
    { 0x68DA9E36u, "sceKernelDelayThreadCB", hle_sceKernelDelayThreadCB },
    { 0x9ACE131Eu, "sceKernelSleepThread", hle_sceKernelSleepThread },
    { 0x82826F70u, "sceKernelSleepThreadCB", hle_sceKernelSleepThreadCB },
    { 0xD59EAD2Fu, "sceKernelWakeupThread", hle_sceKernelWakeupThread },
    { 0xFCCFAD26u, "sceKernelCancelWakeupThread", hle_sceKernelCancelWakeupThread },
    { 0x293B45B8u, "sceKernelGetThreadId", hle_sceKernelGetThreadId },
    { 0x71BC9871u, "sceKernelChangeThreadPriority", hle_sceKernelChangeThreadPriority },
    { 0x94AA61EEu, "sceKernelGetThreadCurrentPriority", hle_sceKernelGetThreadCurrentPriority },
    { 0xFFC36A14u, "sceKernelReferThreadRunStatus", hle_sceKernelReferThreadRunStatus },
    { 0xD6DA4BA1u, "sceKernelCreateSema", hle_sceKernelCreateSema },
    { 0x28B6489Cu, "sceKernelDeleteSema", hle_sceKernelDeleteSema },
    { 0x3F53E640u, "sceKernelSignalSema", hle_sceKernelSignalSema },
    { 0x4E3A1105u, "sceKernelWaitSema", hle_sceKernelWaitSema },
    { 0x6D212BACu, "sceKernelWaitSemaCB", hle_sceKernelWaitSemaCB },
    { 0x55C20A00u, "sceKernelCreateEventFlag", hle_sceKernelCreateEventFlag },
    { 0xEF9E4C70u, "sceKernelDeleteEventFlag", hle_sceKernelDeleteEventFlag },
    { 0x1FB15A32u, "sceKernelSetEventFlag", hle_sceKernelSetEventFlag },
    { 0x812346E4u, "sceKernelClearEventFlag", hle_sceKernelClearEventFlag },
    { 0x402FCF22u, "sceKernelWaitEventFlag", hle_sceKernelWaitEventFlag },
    { 0x328C546Au, "sceKernelWaitEventFlagCB", hle_sceKernelWaitEventFlagCB },
    { 0xA66B0120u, "sceKernelReferEventFlagStatus", hle_sceKernelReferEventFlagStatus },
    { 0xE81CAF8Fu, "sceKernelCreateCallback", hle_sceKernelCreateCallback },
    { 0xDB738F35u, "sceKernelGetSystemTime", hle_sceKernelGetSystemTime },
    { 0x369ED59Du, "sceKernelGetSystemTimeLow", hle_sceKernelGetSystemTimeLow },
    { 0x82BC5777u, "sceKernelGetSystemTimeWide", hle_sceKernelGetSystemTimeWide },

    /* ModuleMgrForUser -- include/modulemgr.h */
    { 0x977DE386u, "sceKernelLoadModule", hle_sceKernelLoadModule },
    { 0x50F0C1ECu, "sceKernelStartModule", hle_sceKernelStartModule },
    { 0xD1FF982Au, "sceKernelStopModule", hle_sceKernelStopModule },
    { 0x2E0911AAu, "sceKernelUnloadModule", hle_sceKernelUnloadModule },
    { 0xF0A26395u, "sceKernelGetModuleId", hle_sceKernelGetModuleId },
    { 0xD8B73127u, "sceKernelGetModuleIdByAddress", hle_sceKernelGetModuleIdByAddress },
    { 0x8F2DF740u, "sceKernelStopUnloadSelfModuleWithStatus", hle_sceKernelStopUnloadSelfModuleWithStatus },

    /* sceDisplay -- include/displaysvc.h */
    { 0x0E20F177u, "sceDisplaySetMode", hle_sceDisplaySetMode },
    { 0x289D82FEu, "sceDisplaySetFrameBuf", hle_sceDisplaySetFrameBuf },
    { 0xEEDA2E54u, "sceDisplayGetFrameBuf", hle_sceDisplayGetFrameBuf },
    { 0x984C27E7u, "sceDisplayWaitVblankStart", hle_sceDisplayWaitVblankStart },
    { 0x4D4E10ECu, "sceDisplayIsVblank", hle_sceDisplayIsVblank },
    { 0x9C6EAAD7u, "sceDisplayGetVcount", hle_sceDisplayGetVcount },
    { 0x773DD3A3u, "sceDisplayGetCurrentHcount", hle_sceDisplayGetCurrentHcount },
    { 0x210EAB3Au, "sceDisplayGetAccumulatedHcount", hle_sceDisplayGetAccumulatedHcount },
    { 0xDBA6C4C4u, "sceDisplayGetFramePerSec", hle_sceDisplayGetFramePerSec },

    /* sceGe_user -- include/geman.h */
    { 0xAB49E76Au, "sceGeListEnQueue", hle_sceGeListEnQueue },
    { 0xB287BD61u, "sceGeDrawSync", hle_sceGeDrawSync },
    { 0xA4FC06A4u, "sceGeSetCallback", hle_sceGeSetCallback },
    { 0xE47E40E4u, "sceGeEdramGetAddr", hle_sceGeEdramGetAddr },

    /* IoFileMgrForUser -- include/iofilemgr.h */
    { 0x109F50BCu, "sceIoOpen", hle_sceIoOpen },
    { 0x89AA9906u, "sceIoOpenAsync", hle_sceIoOpenAsync },
    { 0x6A638D83u, "sceIoRead", hle_sceIoRead },
    { 0xA0B5A7C2u, "sceIoReadAsync", hle_sceIoReadAsync },
    { 0x42EC03ACu, "sceIoWrite", hle_sceIoWrite },

    /* sceMpeg -- include/libmpeg.h */
    { 0x800C44DFU, "sceMpegAtracDecode", hle_sceMpegAtracDecode },
    { 0x0E3C2E9DU, "sceMpegAvcDecode", hle_sceMpegAvcDecode },
    { 0x4571CC64U, "sceMpegAvcDecodeFlush", hle_sceMpegAvcDecodeFlush },
    { 0x740FCCD1U, "sceMpegAvcDecodeStop", hle_sceMpegAvcDecodeStop },
    { 0xD8C5F121U, "sceMpegCreate", hle_sceMpegCreate },
    { 0x606A4649U, "sceMpegDelete", hle_sceMpegDelete },
    { 0x874624D6U, "sceMpegFinish", hle_sceMpegFinish },
    /* sceAtrac3plus -- runtime/hle/libatrac3plus.c (silence decode) */
    { 0x7A20E7AFU, "sceAtracSetDataAndGetID", hle_sceAtracSetDataAndGetID },
    { 0x61EB33F5U, "sceAtracReleaseAtracID", hle_sceAtracReleaseAtracID },
    { 0x6A8C3CD5U, "sceAtracDecodeData", hle_sceAtracDecodeData },
    { 0x9AE849A7U, "sceAtracGetRemainFrame", hle_sceAtracGetRemainFrame },
    { 0x5D268707U, "sceAtracGetStreamDataInfo", hle_sceAtracGetStreamDataInfo },
    { 0x7DB31251U, "sceAtracAddStreamData", hle_sceAtracAddStreamData },
    { 0xE23E3A35U, "sceAtracGetNextDecodePosition", hle_sceAtracGetNextDecodePosition },
    { 0xA2BBA8BEU, "sceAtracGetSoundSample", hle_sceAtracGetSoundSample },
    { 0xFAA4F89BU, "sceAtracGetLoopStatus", hle_sceAtracGetLoopStatus },
    { 0x868120B5U, "sceAtracSetLoopNum", hle_sceAtracSetLoopNum },
    { 0x644E5607U, "sceAtracResetPlayPosition", hle_sceAtracResetPlayPosition },
    { 0x707B7629U, "sceMpegFlushAllStream", hle_sceMpegFlushAllStream },
    { 0xCEB870B1U, "sceMpegFreeAvcEsBuf", hle_sceMpegFreeAvcEsBuf },
    { 0xE1CE83A7U, "sceMpegGetAtracAu", hle_sceMpegGetAtracAu },
    { 0xFE246728U, "sceMpegGetAvcAu", hle_sceMpegGetAvcAu },
    { 0x682A619BU, "sceMpegInit", hle_sceMpegInit },
    { 0x167AFD9EU, "sceMpegInitAu", hle_sceMpegInitAu },
    { 0xA780CF7EU, "sceMpegMallocAvcEsBuf", hle_sceMpegMallocAvcEsBuf },
    { 0xF8DCB679U, "sceMpegQueryAtracEsSize", hle_sceMpegQueryAtracEsSize },
    { 0xC132E22FU, "sceMpegQueryMemSize", hle_sceMpegQueryMemSize },
    { 0x21FF80E4U, "sceMpegQueryStreamOffset", hle_sceMpegQueryStreamOffset },
    { 0x611E9E11U, "sceMpegQueryStreamSize", hle_sceMpegQueryStreamSize },
    { 0x42560F23U, "sceMpegRegistStream", hle_sceMpegRegistStream },
    { 0xB5F6DC87U, "sceMpegRingbufferAvailableSize", hle_sceMpegRingbufferAvailableSize },
    { 0x37295ED8U, "sceMpegRingbufferConstruct", hle_sceMpegRingbufferConstruct },
    { 0x13407F13U, "sceMpegRingbufferDestruct", hle_sceMpegRingbufferDestruct },
    { 0xB240A59EU, "sceMpegRingbufferPut", hle_sceMpegRingbufferPut },
    { 0xD7A29F46U, "sceMpegRingbufferQueryMemSize", hle_sceMpegRingbufferQueryMemSize },
    { 0x591A4AA2U, "sceMpegUnRegistStream", hle_sceMpegUnRegistStream },

    { 0x172D316Eu, "sceKernelStdin", hle_sceKernelStdin },
    { 0xA6BAB2E9u, "sceKernelStdout", hle_sceKernelStdout },
    { 0xF78BA90Au, "sceKernelStderr", hle_sceKernelStderr },
    { 0x810C4BC3u, "sceIoClose", hle_sceIoClose },
    { 0x27EB27B8u, "sceIoLseek", hle_sceIoLseek },
    { 0x71B19E77u, "sceIoLseekAsync", hle_sceIoLseekAsync },
    { 0xACE946E8u, "sceIoGetstat", hle_sceIoGetstat },
    { 0x779103A0u, "sceIoRename", hle_sceIoRename },
    { 0x54F5FB11u, "sceIoDevctl", hle_sceIoDevctl },
    { 0xE23EEC33u, "sceIoWaitAsync", hle_sceIoWaitAsync },
    { 0x3251EA56u, "sceIoPollAsync", hle_sceIoPollAsync },

    /* Kernel_Library / UtilsForUser / InterruptManager */
    { 0x092968F4u, "sceKernelCpuSuspendIntr", hle_sceKernelCpuSuspendIntr },
    { 0x5F10D406u, "sceKernelCpuResumeIntr", hle_sceKernelCpuResumeIntr },
    { 0x79D1C3FAu, "sceKernelDcacheWritebackAll", hle_sceKernelDcacheWritebackAll },
    { 0x3EE30821u, "sceKernelDcacheWritebackRange", hle_sceKernelDcacheWritebackRange },
    { 0x6AD345D7u, "sceKernelSetGPO", hle_sceKernelSetGPO },
    { 0x91E4F6A7u, "sceKernelLibcClock", hle_sceKernelLibcClock },
    { 0x27CC57F0u, "sceKernelLibcTime", hle_sceKernelLibcTime },
    { 0x71EC4271u, "sceKernelLibcGettimeofday", hle_sceKernelLibcGettimeofday },
    { 0xCA04A2B9u, "sceKernelRegisterSubIntrHandler", hle_sceKernelRegisterSubIntrHandler },
    { 0xD61E6961u, "sceKernelReleaseSubIntrHandler", hle_sceKernelReleaseSubIntrHandler },
    { 0xFB8E22ECu, "sceKernelEnableSubIntr", hle_sceKernelEnableSubIntr },

    /* sceSuspendForUser / scePower / sceImpose / sceWlanDrv / sceDmac / LoadExec */
    { 0xEFD3C963u, "sceKernelPowerTick", hle_sceKernelPowerTick },
    { 0x3E0271D3u, "sceKernelVolatileMemLock", hle_sceKernelVolatileMemLock },
    { 0xA569E425u, "sceKernelVolatileMemUnlock", hle_sceKernelVolatileMemUnlock },
    { 0x04B7766Eu, "scePowerRegisterCallback", hle_scePowerRegisterCallback },
    { 0x36AA6E91u, "sceImposeSetLanguageMode", hle_sceImposeSetLanguageMode },
    { 0x0C622081u, "sceWlanGetEtherAddr", hle_sceWlanGetEtherAddr },
    { 0x617F3FE6u, "sceDmacMemcpy", hle_sceDmacMemcpy },
    { 0x05572A5Fu, "sceKernelExitGame", hle_sceKernelExitGame },
    { 0x4AC57943u, "sceKernelRegisterExitCallback", hle_sceKernelRegisterExitCallback },

    { 0xEADB1BD7u, "sceKernelPowerLock", hle_sceKernelPowerLock },
    { 0x3AEE7261u, "sceKernelPowerUnlock", hle_sceKernelPowerUnlock },

    /* sceRtc -- include/rtcsvc.h */
    { 0xC41C2853u, "sceRtcGetTickResolution", hle_sceRtcGetTickResolution },
    { 0x3F7AD767u, "sceRtcGetCurrentTick", hle_sceRtcGetCurrentTick },
    { 0xE7C27D1Bu, "sceRtcGetCurrentClockLocalTime", hle_sceRtcGetCurrentClockLocalTime },
    { 0xCF561893u, "sceRtcGetWin32FileTime", hle_sceRtcGetWin32FileTime },
    { 0x6FF40ACCu, "sceRtcGetTick", hle_sceRtcGetTick },

    /* sceSuspendForUser -- include/powersvc.h */
    { 0x090CCB3Fu, "sceKernelPowerTick", hle_sceKernelPowerTick },

    /* sceUmdUser -- include/mediaman.h */
    { 0x46EBB729u, "sceUmdCheckMedium", hle_sceUmdCheckMedium },
    { 0xC6183D47u, "sceUmdActivate", hle_sceUmdActivate },
    { 0x6B4A146Cu, "sceUmdGetDriveStat", hle_sceUmdGetDriveStat },
    { 0x8EF08FCEu, "sceUmdWaitDriveStat", hle_sceUmdWaitDriveStat },
    { 0x6AF9B50Au, "sceUmdCancelWaitDriveStat", hle_sceUmdCancelWaitDriveStat },
    { 0xAEE7404Du, "sceUmdRegisterUMDCallBack", hle_sceUmdRegisterUMDCallBack },

    /* sceCtrl -- include/ctrlsvc.h */
    { 0x1F4011E6u, "sceCtrlSetSamplingMode", hle_sceCtrlSetSamplingMode },
    { 0x1F803938u, "sceCtrlReadBufferPositive", hle_sceCtrlReadBufferPositive },
    { 0xA7144800u, "sceCtrlSetIdleCancelThreshold", hle_sceCtrlSetIdleCancelThreshold },
    { 0x687660FAu, "sceCtrlGetIdleCancelThreshold", hle_sceCtrlGetIdleCancelThreshold },

    /* sceUtility -- include/utility/utility_sysparam.h, utility_module.h */
    { 0xA5DA2406u, "sceUtilityGetSystemParamInt", hle_sceUtilityGetSystemParamInt },
    { 0x34B78343u, "sceUtilityGetSystemParamString", hle_sceUtilityGetSystemParamString },
    { 0xC629AF26u, "sceUtilityLoadAvModule", hle_sceUtilityLoadAvModule },
    { 0x1579A159u, "sceUtilityLoadNetModule", hle_sceUtilityLoadNetModule },
    { 0x64D50C56u, "sceUtilityUnloadNetModule", hle_sceUtilityUnloadNetModule },
    { 0xF6269B82u, "sceUtilityOskInitStart", hle_sceUtilityOskInitStart },
    { 0x4B85C861u, "sceUtilityOskUpdate", hle_sceUtilityOskUpdate },
    { 0xF3F76017u, "sceUtilityOskGetStatus", hle_sceUtilityOskGetStatus },
    { 0x3DFAEBA9u, "sceUtilityOskShutdownStart",
      hle_sceUtilityOskShutdownStart },
    { 0x50C4CD57u, "sceUtilitySavedataInitStart",
      hle_sceUtilitySavedataInitStart },
    { 0xD4B95FFBu, "sceUtilitySavedataUpdate", hle_sceUtilitySavedataUpdate },
    { 0x8874DBE0u, "sceUtilitySavedataGetStatus",
      hle_sceUtilitySavedataGetStatus },
    { 0x9790B33Cu, "sceUtilitySavedataShutdownStart",
      hle_sceUtilitySavedataShutdownStart },

    /* sceLibFont -- include/libfont.h. Exported by the disc's encrypted
     * LIBFONT.PRX, which cannot be recompiled; see runtime/hle/libfont.c. */
    { 0x67F17ED7u, "sceFontNewLib", hle_sceFontNewLib },
    { 0x574B6FBCu, "sceFontDoneLib", hle_sceFontDoneLib },
    { 0x099EF33Cu, "sceFontFindOptimumFont", hle_sceFontFindOptimumFont },
    { 0xA834319Du, "sceFontOpen", hle_sceFontOpen },
    { 0x3AEA8CB6u, "sceFontClose", hle_sceFontClose },
    { 0x0DA7535Eu, "sceFontGetFontInfo", hle_sceFontGetFontInfo },
    { 0xDCC80C2Fu, "sceFontGetCharInfo", hle_sceFontGetCharInfo },
    { 0x980F4895u, "sceFontGetCharGlyphImage", hle_sceFontGetCharGlyphImage },

    /* sceAudio -- the 2.x channel interface; no prototypes in the 6.6.0
     * headers. See runtime/hle/audiooutput.c. */
    { 0x5EC81C55u, "sceAudioChReserve", hle_sceAudioChReserve },
    { 0x6FC46853u, "sceAudioChRelease", hle_sceAudioChRelease },
    { 0x136CAF51u, "sceAudioOutputBlocking", hle_sceAudioOutputBlocking },
    { 0xE2D56B2Du, "sceAudioOutputPanned", hle_sceAudioOutputPanned },
    { 0x13F592BCu, "sceAudioOutputPannedBlocking",
      hle_sceAudioOutputPannedBlocking },
    { 0x95FD0C2Du, "sceAudioChangeChannelConfig",
      hle_sceAudioChangeChannelConfig },
    { 0xB7E1D8E7u, "sceAudioChangeChannelVolume",
      hle_sceAudioChangeChannelVolume },
    { 0xCB2E439Eu, "sceAudioSetChannelDataLen", hle_sceAudioSetChannelDataLen },
    { 0xB011922Fu, "sceAudioGetChannelRestLength",
      hle_sceAudioGetChannelRestLength },

    /* sceSasCore -- include/libsas.h. The module exports the __ forms, which
     * take the caller's SAS core block as a leading argument. */
    { 0x42778A9Fu, "__sceSasInit", hle_sceSasInit },
    { 0xA3589D81u, "__sceSasCore", hle_sceSasCore },
    { 0x50A14DFCu, "__sceSasCoreWithMix", hle_sceSasCoreWithMix },
    { 0x76F01ACAu, "__sceSasSetKeyOn", hle_sceSasSetKeyOn },
    { 0xA0CF2FA4u, "__sceSasSetKeyOff", hle_sceSasSetKeyOff },
    { 0x440CA7D8u, "__sceSasSetVolume", hle_sceSasSetVolume },
    { 0xAD84D37Fu, "__sceSasSetPitch", hle_sceSasSetPitch },
    { 0x99944089u, "__sceSasSetVoice", hle_sceSasSetVoice },
    { 0xB7660A23u, "__sceSasSetNoise", hle_sceSasSetNoise },
    { 0x019B25EBu, "__sceSasSetADSR", hle_sceSasSetADSR },
    { 0x9EC3676Au, "__sceSasSetADSRmode", hle_sceSasSetADSRmode },
    { 0x5F9529F6u, "__sceSasSetSL", hle_sceSasSetSL },
    { 0xCBCD4F79u, "__sceSasSetSimpleADSR", hle_sceSasSetSimpleADSR },
    { 0x68A46B95u, "__sceSasGetEndFlag", hle_sceSasGetEndFlag },
    { 0x74AE582Au, "__sceSasGetEnvelopeHeight", hle_sceSasGetEnvelopeHeight },
    { 0x2C8E6AB3u, "__sceSasGetPauseFlag", hle_sceSasGetPauseFlag },
    { 0x787D04D5u, "__sceSasSetPause", hle_sceSasSetPause },
    { 0x33D4AB37u, "__sceSasRevType", hle_sceSasRevType },
    { 0xD5A229C9u, "__sceSasRevEVOL", hle_sceSasRevEVOL },
    { 0xF983B186u, "__sceSasRevVON", hle_sceSasRevVON },
    { 0x267A6DD2u, "__sceSasRevParam", hle_sceSasRevParam },
};

const unsigned g_hle_impl_count =
    (unsigned)(sizeof g_hle_impl / sizeof g_hle_impl[0]);
