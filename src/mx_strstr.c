#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    int a = 0, b = 1;
    char *str = mx_strnew(mx_strlen((char *)haystack));

    for (int i = 0; i < mx_strlen((char *)haystack); i++) {
        if (haystack[i] == needle[0]) {
            str[0] = haystack[i];
            for (int j = 1; j < mx_strlen((char *)needle); j++) {
                if (haystack[i + j] == needle[j]) {
                    a++;
                }
                if (a + 1 == mx_strlen((char *)needle)) {
                    for (int k = i + 1; k < mx_strlen((char *)haystack); k++) {
                        str[b] = haystack[k];
                        b++;
                    }
                    return str;
                }
            }
        }
    }
    return NULL;
}
