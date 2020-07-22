#include "../inc/libmx.h"

int mx_get_char_index(const char *str, char c) {
    if (!str) return -2;
    int index = 0;
    while (*str != '\0' && c != *str) {
        str++;
        index++;
    }

    if (c == *str) return index;
    return -1;
}
