#include "../inc/libmx.h"

int mx_strlen(const char *str) {
    int length = 0;

    while (*str++) length++;
    return length;
}
