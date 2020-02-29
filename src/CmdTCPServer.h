#pragma once
#include "cmdpacket.h"

class CServer;

class CmdTCPServerCallback
{
public:
	CmdTCPServerCallback(void){};
	virtual~CmdTCPServerCallback(void){};
public:
	//���ؿͻ�������
	virtual void OnDispatchCmd(unsigned int & ulClientID,KCmdPacketEx& pPacket){};
	//���ؿͻ���������Ϣ
	virtual void ClientConnected(unsigned int ulClientID,unsigned int ulClientRemoteIP){};
	//���ؿͻ��˶Ͽ���Ϣ
	virtual void ClientDisconnected(unsigned int ulClientID){};
};

class CmdTCPServer
{
public:
	bool startRecv(CmdTCPServerCallback& pCallback,bool isEncrypt);
	bool stopRecv();
	bool sendData(unsigned int& ulClientID,KCmdPacketEx& pPacket);
private:
	CServer* m_pTCPServer;
//     bool m_isEncrypt;
};


