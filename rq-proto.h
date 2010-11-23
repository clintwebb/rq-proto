#ifndef __RQ_PROTO_H
#define __RQ_PROTO_H

// This version indicates the version of the library so that developers of
// services can ensure that the correct version is installed.
// This version number should be incremented with every change that would
// effect logic.
#define RQ_PROTO_VERSION  0x00010000
#define RQ_PROTO_VERSION_NAME "v1.00.00"



/// execute commands (0 to 31)
#define RQ_CMD_NOP              0
#define RQ_CMD_CLEAR            1
#define RQ_CMD_PING             5
#define RQ_CMD_PONG             6
#define RQ_CMD_REQUEST          10
#define RQ_CMD_REPLY            11
#define RQ_CMD_DELIVERED        13
#define RQ_CMD_BROADCAST        14
#define RQ_CMD_UNDELIVERED      16
#define RQ_CMD_CONSUME          20
#define RQ_CMD_CANCEL_QUEUE     21
#define RQ_CMD_CLOSING          22
#define RQ_CMD_SERVER_FULL      23
#define RQ_CMD_CONSUMING        24

/// flags (32 to 63)
#define RQ_CMD_EXCLUSIVE        32
#define RQ_CMD_NOREPLY          33

/// byte integer (64 to 95)
#define RQ_CMD_PRIORITY         64
#define RQ_CMD_RETRIES          65

/// short integer (96 to 127)
#define RQ_CMD_QUEUEID          96
#define RQ_CMD_TIMEOUT          97
#define RQ_CMD_MAX              98

/// large integer (128 to 159 
#define RQ_CMD_ID               128

/// short string (160 to 192)
#define RQ_CMD_QUEUE            160

/// string (192 to 223)

/// large string (224 to 255)
#define RQ_CMD_PAYLOAD          224




#endif
