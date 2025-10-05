#include <stddef.h>

// to be replaced
void* alloc(size_t size){
    void* ptr = malloc(size);
    return ptr;
}