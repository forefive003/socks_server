#ifndef _COMMON_DEF_H
#define _COMMON_DEF_H

#define MAX_USERNAME_LEN 64
#define MAX_PASSWD_LEN 64

/*默认配置服务端口*/
#define DEF_PROC_COMM_SRV_PORT 33332
/*默认数据代理本地服务端口*/
#define DEF_PROXY_SRV_PORT 22223

#define  CONNECT_FAILED_FLAG 0xFF

#define CLIENT_MEM_NODE_CNT  2048
#define SERVER_MEM_NODE_CNT  8192
#define RELAY_MEM_NODE_CNT  40960

typedef enum 
{
	SOCKS_INVALID = 0,
	SOCKS_4 = 1,
	SOCKS_5 = 2,

	PROXY_PROTO_MAX
}SOCK_VER_E;

#if 0
typedef enum 
{
	CLI_INIT = 1,
	CLI_AUTHING,
	CLI_CONNECTING,
	CLI_CONNECTED
}CLI_STATUS_E;
#endif


#define CLIENT_CONVERT(baseclient)  ((CClient*)(baseclient))
#define REMOTE_CONVERT(baseremote)  ((CRemote*)(baseremote))


#endif
