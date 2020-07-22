#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long result = 0;
    unsigned long base = 1;
    int j = 0;

    while (hex[j] != '\0') j++;
    for (; j >= 0; j--) {
        if (hex[j] > 47 && hex[j] < 58) {
            result += (hex[j] - 48) * base;
            base *= 16;
        }
        if (hex[j] > 96 && hex[j] < 103) {
            result += (hex[j] - 87) * base;
            base *= 16;
        } else if (hex[j] > 64 && hex[j] < 71) {
            result += (hex[j] - 55) * base;
            base *= 16;
        }
    }
    return result;
}
