#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int firstIndex = 0;
    int lastIndex = size - 1;
    int middleIndex = (firstIndex + lastIndex) / 2;
    while (firstIndex <= lastIndex) {
        if (mx_strcmp(s, arr[middleIndex]) == 0) {
            *count += 1;
            return middleIndex;
        } else if (mx_strcmp(s, arr[middleIndex]) > 0) {
            *count += 1;
            firstIndex = middleIndex + 1;
        } else {
            *count += 1;
            lastIndex = middleIndex - 1;
        }
        middleIndex = (firstIndex + lastIndex) / 2;
    }
    *count = 0;
    return -1;
}
