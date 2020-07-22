#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    int mid = (left + right + 1) / 2;
    int count = 0;
    char *temp;

    for (; left < mid + 1; left++) {
        if (mx_strlen(arr[left]) >= mx_strlen(arr[mid])) {
            for (; left < right; right--) {
                if (mx_strlen(arr[left]) > mx_strlen(arr[right])) {
                    temp = arr[left];
                    arr[left] = arr[right];
                    arr[right] = temp;
                    count++;
                    left--;
                    break;
                }
            }
        }
    }
    return count;
}
