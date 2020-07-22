#include "../inc/libmx.h"

int mx_sqrt(int x) {
    int result = 0;

    for (int i = 0; i < 46340; i++)
        if (i * i == x) return i;
    return result;
}
