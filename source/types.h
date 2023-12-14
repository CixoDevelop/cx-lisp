#ifndef CL_TYPES_H_INCLUDED
#define CL_TYPES_H_INCLUDED

#include <stdbool.h>

typedef enum cl_type_e {
    CL_NONE,
    CL_NUMBER,
    CL_LIST,
    CL_TEXT,
    CL_NATIVE,
    CL_LOGIC
} cl_type_t;

typedef void (*cl_native_t)(void *);
typedef double cl_number_t;
typedef char* cl_text_t;
typedef bool cl_logic_t;

#endif
