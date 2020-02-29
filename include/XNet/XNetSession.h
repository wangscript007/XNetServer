//XNetSession.h
#ifndef __XNetSESSION_H__
#define __XNetSESSION_H__

#include <XNet/XNetDefine.h>
//����Ự
class XNetAPI XNetSession
{
public:
	XNetSession(void){};
	virtual~XNetSession(void){};
public:
	typedef enum{
		CS_CONNECTING=0,		//��������
		CS_FAILED,				//�޷�����
		CS_CONNECTED,			//�Ѿ�����
		CS_DISCONNECTED,		//�Ͽ�����
		CS_BUSY,				//����æ(�ѶϿ�������)
		CS_RECONNECTED,			//�����ɹ�
		CS_IDLE,				//����
		CS_RESTARTED,			//���������ˡ����ӶϿ��ˣ������������������ˣ����ǻ���һ�������ӡ�
	}CONNECT_STATUS;
public:
	//���ӷ�����
	virtual int Connect(const char*cszIP,unsigned short usPort,const char*cszInterface)=0;
	//�Ͽ�����
	virtual void Disconnect(void)=0;
	//�յ�����״̬
	virtual void OnXNetSessionConnectStatus(XNetSession::CONNECT_STATUS cs,int nErrorCode=0)=0;
};

#endif
