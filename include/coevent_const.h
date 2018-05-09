// file encoding: UTF-8

#ifndef __CO_EVENT_CONST_H__
#define __CO_EVENT_CONST_H__

#ifndef NULL
#define NULL    ((void*)0)
#endif

namespace andrewmc {
namespace libcoevent {

typedef enum {
    ERR_SUCCESS = 0,
    ERR_EVENT_BASE_NEW,
    ERR_EVENT_BASE_DISPATCH,
    ERR_EVENT_BASE_NO_EVENT_PANDING,

    ERR_UNKNOWN     // should place at last
} ErrCode_t;

extern const char *g_error_msg_list[];

}   // end of namespace libcoevent
}   // end of namespace andrewmc
#endif  // EOF