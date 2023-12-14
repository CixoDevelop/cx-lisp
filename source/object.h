#ifndef CL_OBJECT_H_INCLUDED
#define CL_OBJECT_H_INCLUDED

#include "types.h"

typedef union cl_content_u {
    cl_native_t native;
    cl_number_t number;
    cl_text_t text;
    cl_logic_t logic;
    void *list;
} cl_content_t;

typedef struct cl_object_s {
    cl_type_t type;
    cl_content_t content;
} cl_object_t;

#endif
