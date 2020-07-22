#include "../inc/libmx.h"

char *mx_strcpy(char *dst, const char *src) {
    unsigned long long i;

    i = -1;
    while (src[++i]) dst[i] = src[i];
    dst[i] = 0;
    return (dst);
}
