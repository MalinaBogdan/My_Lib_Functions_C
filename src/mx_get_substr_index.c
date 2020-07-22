#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int a = -1;

    if (str == NULL || sub == NULL) {
        a = -2;
    } else {
        for (int i = 0; i < mx_strlen((char *)str); i++) {
            if (str[i] == sub[0]) {
                for (int j = 1; j < mx_strlen((char *)sub); j++) {
                    if (str[i + j] == sub[j]) {
                        a = i;
                    } else
                        a = -1;
                }
            }
        }
    }
    return a;
}
