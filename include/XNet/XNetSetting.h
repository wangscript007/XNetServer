//XNetSetting.h
#ifndef __XNetSETTING_H__
#define __XNetSETTING_H__

#include <XNet/XNetDefine.h>
//��������
class XNetAPI XNetSetting
{ 
public:
	XNetSetting(void);
	virtual~XNetSetting(void);
	
public:
	typedef enum{
		PT_NONE=0,		//�޴���ֱ������
		PT_HTTP_PROXY,	//HTTP����
		PT_SOCK5,		//SOCK5����
		PT_HTTP_TUNNEL,	//HTTP���
		PT_HTTPS_TUNNEL	//HTTPS���
	}PROXY_TYPE;

	typedef enum{
		PT_TCP=0,		//TCP����Э��
		PT_UDP,			//UDP����Э��
		PT_RTP,			//RTP����Э��
	}PROTOCOL_TYPE;
	
public:
	//��������ͨѶЭ������
	static void SetSessionProtocolType(XNetSetting::PROTOCOL_TYPE type);
	static XNetSetting::PROTOCOL_TYPE GetSessionProtocolType(void);

	//������Ƶ����Э������
	static void SetAudioProtocolType(XNetSetting::PROTOCOL_TYPE type);
	static XNetSetting::PROTOCOL_TYPE GetAudioProtocolType(void);

	//������Ƶ����Э������
	static void SetVideoProtocolType(XNetSetting::PROTOCOL_TYPE type);
	static XNetSetting::PROTOCOL_TYPE GetVideoProtocolType(void);

	//�������ݴ���Э������
	static void SetDataProtocolType(XNetSetting::PROTOCOL_TYPE type);
	static XNetSetting::PROTOCOL_TYPE GetDataProtocolType(void);

	//�����Ƿ�ֻʹ��MCU
	static void SetMCUOnly(int nMCUOnly);
	static int GetMCUOnly(void);
	
	//���ô�������
	static void SetProxyType(XNetSetting::PROXY_TYPE pt);
	static XNetSetting::PROXY_TYPE GetProxyType(void);
	
	//���ô����û�
	static void SetProxyUser(const char* cszUser);
	static const char*GetProxyUser(void);
	
	//���ô�������
	static void SetProxyPassword(const char* cszPassword);
	static const char*GetProxyPassword(void);
	
	//���ô��������
	static void SetProxyHost(const char* cszHost);
	static const char*GetProxyHost(void);
	static void SetProxyPort(unsigned short usPort);
	static unsigned short GetProxyPort(void);
};

#endif
