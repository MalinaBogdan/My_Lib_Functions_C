#include "../inc/libmx.h"

char *mx_itoa(int number) {
    int num = number, length = 0;

    while (num != 0) {
        num /= 10;
        length++;
    }

    char *str = mx_strnew(length);
    int i = length - 1;

    do {
        str[i--] = (number % 10) + 48;
        number /= 10;

    } while (number > 0);

    return str;
}
