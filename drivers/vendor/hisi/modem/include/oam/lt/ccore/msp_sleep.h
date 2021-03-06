//*****************************************************************************
//  文 件 名   : msp_drx.h
//  版 本 号   : V1.0
//  修改历史   :
//    修改内容 : 创建文件
//*****************************************************************************
#ifndef __MSP_SLEEP_H__
#define __MSP_SLEEP_H__

#include "vos.h"
#include <mdrv.h>
/*****************************************************************************
* 函 数 名  : TLSLEEP_ActivateHw
*
* 功能描述  : 提供给PS，在上电初始化的时候PS调用此接口为通信相关的器件上电开钟。
*
* 输入参数  : 无
* 输出参数  : 无
* 返 回 值  : 无
****************************************************************************/
void   TLSLEEP_ActivateHw(PWC_COMM_MODE_E modeid);
/*****************************************************************************
* 函 数 名  : TLSLEEP_MasterAwakeSlave
*
* 功能描述  : 提供给GU SLEEP模块，在Gu为主模，TL为从模时唤醒TL DSP时调用。
*
* 输入参数  : 无
* 输出参数  : 无
* 返 回 值  : 无
****************************************************************************/
void TLSLEEP_MasterAwakeSlave(void);
/*****************************************************************************
* 函 数 名  : TLSLEEP_RttIsSleep
*
* 功能描述  : 提供给PS，获取当前DSP的睡眠状态。
*
* 输入参数  : 无
* 输出参数  : 无
* 返 回 值  : VOS_TRUE:    当前DSP为睡眠状态
                         VOS_FALSE :  当前DSP为唤醒状态
****************************************************************************/
VOS_BOOL TLSLEEP_RttIsSleep(void);
/*****************************************************************************
 函 数 名  : TLSLEEP_GetPreSfn
 功能描述  : 此接口用于读取DSP在进入睡眠前锁存的TDS的子贞号，目前是所存在了低功耗所使用的SRAM空间中
 输入参数  : VOS_VOID
 输出参数  : DSP在进入睡眠前锁存的TDS的子贞号,PS调用
 返 回 值  : DSP在进入睡眠前锁存的TDS的子贞号,PS调用
*****************************************************************************/
VOS_UINT32 TLSLEEP_GetPreSfn(VOS_VOID);


typedef VOS_VOID (*TL_SLEEP_NOTIFY_FUNC)(VOS_VOID);
extern VOS_VOID TLSLEEP_NotifyReg(TL_SLEEP_NOTIFY_FUNC pFuncSleep, TL_SLEEP_NOTIFY_FUNC pFuncWakeup);


#endif


