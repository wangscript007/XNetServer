//XNetServer.h
#ifndef __XNetSERVER_H__
#define __XNetSERVER_H__

#include "XNetSession.h"

//����Server
class XNetServerCallback
{
public:
	XNetServerCallback(void){};
	virtual~XNetServerCallback(void){};
public:
	virtual void OnXNetServerClientConnected(unsigned int ulClientID,unsigned int ulClientRemoteIP)=0;
	virtual void OnXNetServerClientDisconnected(unsigned int ulClientID)=0;
	virtual void OnXNetServerReceivedFromClient(unsigned int ulClientID,const char*pData,int nLen)=0;

};

class XNetAPI XNetServer
{
public:
	XNetServer(void){};
	virtual ~XNetServer(void){};
public:
	//�������ط���
	virtual int Start(void)=0;
	
	//ֹͣ���ط���
	virtual void Stop(void)=0;

	//��ÿͻ�SESSION��Ŀ
	virtual unsigned int GetClientCount(void)=0;

	//�������ݸ�ָ��������ͻ���
	virtual int SendDataToClient(unsigned int nClientID,const char*pData,int nLen)=0;

	//ǿ�ƶϿ��ͻ���
	virtual void DisconnectClient(unsigned int nClientID)=0;

	static XNetServer*Create(XNetServerCallback&rCallback,unsigned short usServerType);
};

#endif
