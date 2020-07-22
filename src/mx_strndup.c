#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *str2 = mx_strnew(n);

    mx_strncpy(str2, s1, 3);
    return str2;
}
