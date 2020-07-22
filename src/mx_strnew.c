#include "../inc/libmx.h"

char* mx_strnew(const int size) {
    if (size < 1) return NULL;
    char* str = malloc((size + 1) * sizeof(char));
    if (str == NULL) return NULL;
    for (int i = 0; i <= size; i++) {
        str[i] = '\0';
    }
    return str;
}