#ifndef CL_LIST_H_INCLUDED
#define CL_LIST_H_INCLUDED

#include <stdint.h>
#include <stdbool.h>
#include "object.h"

typedef struct cl_list_item_s {
    cl_object_t object;
    struct cl_list_item_s *next;
} cl_list_item_t;

typedef cl_list_item_t* cl_list_t;

static inline cl_list_t cl_list_create() {
    return NULL;
}

static inline bool cl_list_item_exists(cl_list_item_t *self) {
    return self != NULL;
}   

size_t cl_list_count(cl_list_t self);
cl_list_item_t* cl_list_get_last(cl_list_t self);
cl_list_item_t* cl_list_get(cl_list_t self, size_t count);
bool cl_list_append(cl_list_t *self, cl_object_t new_object);

#endif
