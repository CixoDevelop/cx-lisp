#ifndef CL_LIST_H_INCLUDED
#define CL_LIST_H_INCLUDED

#include "object.h"

typedef struct cl_list_item_s {
    cl_object_t object;
    struct cl_list_item_s *next;
} cl_list_item_t;



#endif
