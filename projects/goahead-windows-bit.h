/*
    bit.h -- Build It Configuration Header for windows-x86

    This header is generated by Bit during configuration. To change settings, re-run
    configure or define variables in your Makefile to override these default values.
 */

/* Settings */
#ifndef BIT_ACCESS_LOG
    #define BIT_ACCESS_LOG 0
#endif
#ifndef BIT_AUTO_LOGIN
    #define BIT_AUTO_LOGIN 0
#endif
#ifndef BIT_BUILD_NUMBER
    #define BIT_BUILD_NUMBER "0"
#endif
#ifndef BIT_CA_FILE
    #define BIT_CA_FILE ""
#endif
#ifndef BIT_CA_PATH
    #define BIT_CA_PATH ""
#endif
#ifndef BIT_CERTIFICATE
    #define BIT_CERTIFICATE "server.crt"
#endif
#ifndef BIT_CGI
    #define BIT_CGI 1
#endif
#ifndef BIT_CGI_BIN
    #define BIT_CGI_BIN "cgi-bin"
#endif
#ifndef BIT_COMPANY
    #define BIT_COMPANY "Embedthis"
#endif
#ifndef BIT_DEPTH
    #define BIT_DEPTH 1
#endif
#ifndef BIT_DOCUMENTS
    #define BIT_DOCUMENTS "web"
#endif
#ifndef BIT_HAS_DYN_LOAD
    #define BIT_HAS_DYN_LOAD 1
#endif
#ifndef BIT_HAS_LIB_EDIT
    #define BIT_HAS_LIB_EDIT 0
#endif
#ifndef BIT_HAS_MMU
    #define BIT_HAS_MMU 1
#endif
#ifndef BIT_HAS_UNNAMED_UNIONS
    #define BIT_HAS_UNNAMED_UNIONS 1
#endif
#ifndef BIT_HTTP_PORT
    #define BIT_HTTP_PORT 8080
#endif
#ifndef BIT_HTTP_V6_PORT
    #define BIT_HTTP_V6_PORT 9090
#endif
#ifndef BIT_JAVASCRIPT
    #define BIT_JAVASCRIPT 1
#endif
#ifndef BIT_KEY
    #define BIT_KEY "server.key.pem"
#endif
#ifndef BIT_LEGACY
    #define BIT_LEGACY 1
#endif
#ifndef BIT_LIMIT_BUFFER
    #define BIT_LIMIT_BUFFER 8192
#endif
#ifndef BIT_LIMIT_FILENAME
    #define BIT_LIMIT_FILENAME 256
#endif
#ifndef BIT_LIMIT_HEADER
    #define BIT_LIMIT_HEADER 2048
#endif
#ifndef BIT_LIMIT_HEADERS
    #define BIT_LIMIT_HEADERS 4096
#endif
#ifndef BIT_LIMIT_NUM_HEADERS
    #define BIT_LIMIT_NUM_HEADERS 64
#endif
#ifndef BIT_LIMIT_PASSWORD
    #define BIT_LIMIT_PASSWORD 32
#endif
#ifndef BIT_LIMIT_RX_BODY
    #define BIT_LIMIT_RX_BODY 16384
#endif
#ifndef BIT_LIMIT_SESSION_COUNT
    #define BIT_LIMIT_SESSION_COUNT 120
#endif
#ifndef BIT_LIMIT_SESSION_LIFE
    #define BIT_LIMIT_SESSION_LIFE 1800
#endif
#ifndef BIT_LIMIT_SOCKET_BUFFER
    #define BIT_LIMIT_SOCKET_BUFFER 4096
#endif
#ifndef BIT_LIMIT_STRING
    #define BIT_LIMIT_STRING 4096
#endif
#ifndef BIT_LIMIT_UPLOAD
    #define BIT_LIMIT_UPLOAD 204800000
#endif
#ifndef BIT_LIMIT_URI
    #define BIT_LIMIT_URI 2048
#endif
#ifndef BIT_OPTIONAL
    #define BIT_OPTIONAL "doxygen,dsi,ejs,man,man2html,openssl,matrixssl,pmaker,ssl,utest,zip"
#endif
#ifndef BIT_PACKS
    #define BIT_PACKS "bits/packs"
#endif
#ifndef BIT_PAM
    #define BIT_PAM 0
#endif
#ifndef BIT_PRODUCT
    #define BIT_PRODUCT "goahead"
#endif
#ifndef BIT_REALM
    #define BIT_REALM "example.com"
#endif
#ifndef BIT_REPLACE_MALLOC
    #define BIT_REPLACE_MALLOC 0
#endif
#ifndef BIT_REQUIRED
    #define BIT_REQUIRED "winsdk,compiler,link,dumpbin,rc"
#endif
#ifndef BIT_SSL_PORT
    #define BIT_SSL_PORT 4443
#endif
#ifndef BIT_TITLE
    #define BIT_TITLE "Embedthis GoAhead"
#endif
#ifndef BIT_TRACE
    #define BIT_TRACE "stderr:0"
#endif
#ifndef BIT_TRACE_METHOD
    #define BIT_TRACE_METHOD 0
#endif
#ifndef BIT_UPLOAD
    #define BIT_UPLOAD 1
#endif
#ifndef BIT_UPLOAD_DIR
    #define BIT_UPLOAD_DIR "/tmp"
#endif
#ifndef BIT_VERSION
    #define BIT_VERSION "3.0.0"
#endif
#ifndef BIT_WITHOUT_ALL
    #define BIT_WITHOUT_ALL "doxygen,dsi,ejs,man,man2html,pmaker,matrixssl,openssl,ssl"
#endif
#ifndef BIT_WITHOUT_OWN
    #define BIT_WITHOUT_OWN "doxygen,dsi,ejs,man,man2html,pmaker,matrixssl"
#endif

/* Prefixes */
#ifndef BIT_CFG_PREFIX
    #define BIT_CFG_PREFIX "C:/Program Files (x86)/Embedthis GoAhead"
#endif
#ifndef BIT_BIN_PREFIX
    #define BIT_BIN_PREFIX "C:/Program Files (x86)/Embedthis GoAhead/bin"
#endif
#ifndef BIT_INC_PREFIX
    #define BIT_INC_PREFIX "C:/Program Files (x86)/Embedthis GoAhead/inc"
#endif
#ifndef BIT_LOG_PREFIX
    #define BIT_LOG_PREFIX "C:/Program Files (x86)/Embedthis GoAhead/logs"
#endif
#ifndef BIT_PRD_PREFIX
    #define BIT_PRD_PREFIX "C:/Program Files (x86)/Embedthis GoAhead"
#endif
#ifndef BIT_SPL_PREFIX
    #define BIT_SPL_PREFIX "C:/Program Files (x86)/Embedthis GoAhead/tmp"
#endif
#ifndef BIT_SRC_PREFIX
    #define BIT_SRC_PREFIX "C:/Program Files (x86)/Embedthis GoAhead/src"
#endif
#ifndef BIT_VER_PREFIX
    #define BIT_VER_PREFIX "C:/Program Files (x86)/Embedthis GoAhead"
#endif
#ifndef BIT_WEB_PREFIX
    #define BIT_WEB_PREFIX "C:/Program Files (x86)/Embedthis GoAhead/web"
#endif

/* Suffixes */
#ifndef BIT_EXE
    #define BIT_EXE ".exe"
#endif
#ifndef BIT_SHLIB
    #define BIT_SHLIB ".lib"
#endif
#ifndef BIT_SHOBJ
    #define BIT_SHOBJ ".dll"
#endif
#ifndef BIT_LIB
    #define BIT_LIB ".a"
#endif
#ifndef BIT_OBJ
    #define BIT_OBJ ".obj"
#endif

/* Profile */
#ifndef BIT_CONFIG_CMD
    #define BIT_CONFIG_CMD "bit -d -q -platform windows-x86 -without all -profile vs -configure . -gen vs"
#endif
#ifndef BIT_GOAHEAD_PRODUCT
    #define BIT_GOAHEAD_PRODUCT 1
#endif
#ifndef BIT_PROFILE
    #define BIT_PROFILE "vs"
#endif

/* Miscellaneous */
#ifndef BIT_MAJOR_VERSION
    #define BIT_MAJOR_VERSION 3
#endif
#ifndef BIT_MINOR_VERSION
    #define BIT_MINOR_VERSION 0
#endif
#ifndef BIT_PATCH_VERSION
    #define BIT_PATCH_VERSION 0
#endif
#ifndef BIT_VNUM
    #define BIT_VNUM 300000000
#endif

/* Packs */
#ifndef BIT_PACK_CC
    #define BIT_PACK_CC 1
#endif
#ifndef BIT_PACK_DOXYGEN
    #define BIT_PACK_DOXYGEN 0
#endif
#ifndef BIT_PACK_DSI
    #define BIT_PACK_DSI 0
#endif
#ifndef BIT_PACK_DUMPBIN
    #define BIT_PACK_DUMPBIN 0
#endif
#ifndef BIT_PACK_EJS
    #define BIT_PACK_EJS 0
#endif
#ifndef BIT_PACK_LINK
    #define BIT_PACK_LINK 1
#endif
#ifndef BIT_PACK_MAN
    #define BIT_PACK_MAN 0
#endif
#ifndef BIT_PACK_MAN2HTML
    #define BIT_PACK_MAN2HTML 0
#endif
#ifndef BIT_PACK_MATRIXSSL
    #define BIT_PACK_MATRIXSSL 0
#endif
#ifndef BIT_PACK_OPENSSL
    #define BIT_PACK_OPENSSL 0
#endif
#ifndef BIT_PACK_PMAKER
    #define BIT_PACK_PMAKER 0
#endif
#ifndef BIT_PACK_RC
    #define BIT_PACK_RC 1
#endif
#ifndef BIT_PACK_SSL
    #define BIT_PACK_SSL 0
#endif
#ifndef BIT_PACK_UTEST
    #define BIT_PACK_UTEST 1
#endif
#ifndef BIT_PACK_WINSDK
    #define BIT_PACK_WINSDK 1
#endif
#ifndef BIT_PACK_ZIP
    #define BIT_PACK_ZIP 1
#endif
