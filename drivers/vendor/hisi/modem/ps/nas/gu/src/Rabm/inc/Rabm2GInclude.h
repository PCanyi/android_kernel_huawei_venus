

#ifndef __RABM_2G_INCLUDE_H__
#define __RABM_2G_INCLUDE_H__


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"

#include "rabminclude.h"            /*V100R001中RABM模块的头文件*/


#include "NasGmmInterface.h"        /*由GMM模块提供*/
#include "Taf_ApsForRabm.h"         /*由APS模块提供*/
#include "SNInterface.h"            /*由SNDCP模块提供*/
#include "Taf_Tafm_Remote.h"

#include "RabmInterface.h"
#include "Rabm2GStru.h"
#include "RabmExtFunc.h"

#include "MmcRabmInterface.h"

#include "TTFMem.h"
#include "TafClientApi.h"



#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/

/*******************************************************************************
  3 枚举定义
*******************************************************************************/

/*****************************************************************************
  5 消息头定义

模块名＋意义＋HEADER
#define MAPS_TEMPLATE_HEADER    VOS_UINT16    usTotalsMsgLen;\
                                                      VOS_UINT32    ulSendModuleId;\
                                                      VOS_UINT32    ulRecvModuleId;\
*****************************************************************************/

/*****************************************************************************
  6 消息定义

typedef struct
{
    MAPS_TEMPLATE_HEADER
    VOS_UINT8    aucData[2];     消息体

} MAPS_TEMPLATE_MSG;
*****************************************************************************/

/*****************************************************************************
  7 STRUCT定义
******************************************************************************/

/*****************************************************************************
  4 全局变量声明

extern VOS_UINT8* pgucMapsTemplateBuffer;   指针＋全局标识＋类型＋模块名＋意义描述
*****************************************************************************/

/*****************************************************************************
  8 UNION定义

typedef union
{
    VOS_UINT8    ucTemplate;
    VOS_UINT8    aucData[2];

} MAPS_TEMPLATE_UNION;
*****************************************************************************/

/*****************************************************************************
  8 OTHERS定义
*****************************************************************************/

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of Rabm2GInclude.h*/
