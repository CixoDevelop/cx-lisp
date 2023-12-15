#include "list.h"

size_t cl_list_count(cl_list_t self) {
    size_t list_size = 0;
    cl_list_item_t *current = self; 

    while (cl_list_item_exists(current)) {
        current = current->next;
        ++list_size;
    }

    return list_size;
}

cl_list_item_t* cl_list_get_last(cl_list_t self) {
    cl_list_item_t *current = self;

    if (current == NULL) return current;

    while (current->next != NULL) {
        current = current->next;
    }   

    return current;
}

static inline cl_list_item_t* cl_list_item_create() {
    return (cl_list_item_t *) malloc(sizeof(cl_list_item_t));
}

bool cl_list_append(cl_list_t *self, cl_object_t new_object) {
    cl_list_item_t *new_item = cl_list_item_create();

    if (new_item == NULL) return false;

    new_item->content = new_object;
    new_item->next = NULL;

    cl_list_item_t *last = cl_list_get_last(*self);

    if (last == NULL) {
        self = new_item;
        return true;
    }

    last->next = new_item;
    return true;
}

cl_list_item_t* cl_list_get(cl_list_t self, size_t count) {
    cl_list_item_t *current = self;

    while (count > 0) {
        if (current->next == NULL) return NULL;
        
        current = current->next;
        --count;
    }

    return current;
}
