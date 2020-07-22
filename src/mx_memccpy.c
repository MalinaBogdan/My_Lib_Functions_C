#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c,
                 size_t n) {
    bool delimIsFound = false;

    for (size_t i = 0; i < n; i++) {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        if (((unsigned char *)src)[i] == c) {
            delimIsFound = true;
            break;
        }
    }
    if (!delimIsFound) return NULL;
    return dst;
}
