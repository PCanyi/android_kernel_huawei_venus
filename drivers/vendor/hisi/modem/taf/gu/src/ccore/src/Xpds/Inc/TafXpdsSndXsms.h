

#ifndef _TAF_XPDS_AND_XSMS_H_
#define _TAF_XPDS_AND_XSMS_H_

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "TafXpdsXsmsInterface.h"
#include "TafXpdsCtx.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/



/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
VOS_VOID TAF_XPDS_SndXsmsDataReq(
    VOS_UINT32                          ulDataLen,
    VOS_UINT8                          *pucData,
    TAF_XSMS_ADDR_STRU                 *pstXsmsAddr
);

VOS_UINT32 TAF_XPDS_SndXsmsRejNiPosReq(
    TAF_XPDS_REJ_POS_REASON_ENUM_UINT8                  enRejReason
);

VOS_UINT32 TAF_XPDS_SndXsmsCancelPosNotify(
    TAF_XPDS_CANCEL_REASON_ENUM_UINT8                   enCancelReason
);

VOS_VOID TAF_XPDS_FillXsmsMpcRejPosReqStru(
    TAF_XPDS_XSMS_REJ_POS_REQ_STRU  *pstRejPosReq
);





#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of TafXsmsMoFsmMainTbl.h */


