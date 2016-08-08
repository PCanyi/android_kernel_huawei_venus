


#ifndef __TAF_FTM_H__
#define __TAF_FTM_H__

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum
{
    EN_FTM_TMODE_SIGNAL=0,
    EN_FTM_TMODE_NONESIGNAL,
    EN_FTM_TMODE_LOAD,
    EN_FTM_TMODE_RESET,
    EN_FTM_TMODE_SIGNAL_NOCARD,
    EN_FTM_TMODE_OFFLINE,
    EN_FTM_TMODE_UNKNOWN = 6
} FTM_TMODE_ENUM;


/*****************************************************************************
// ��������: FTM_GetMode
// ��������: ��ȡFTM��ǰģʽ��ͬ���ӿ�
//
// ����˵��:
//   pFtmMode [out]: FTM ģʽ
//
//
//
// �� �� ֵ:
//    �ɹ���ERR_FTM_SUCCESS                 ��ʾ�����ɹ�
//    ʧ�ܣ�ERR_FTM_INVALID_PARAMETER       �������Ϊ��
//          ERR_FTM_UNKNOWN                 δ֪����
//          ERR_FTM_NOT_SUPPORT	            ��֧��
//
// ����Ҫ��: FTM��ʼ���󣬷��򷵻ش����� ERR_FTM_UNKNOWN
// ���þ���: TODO: ...
*****************************************************************************/
VOS_UINT32 FTM_GetMode(FTM_TMODE_ENUM* penFtmMode);
#ifdef __cplusplus
}
#endif
#endif