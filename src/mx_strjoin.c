#include "../inc/libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
    if (NULL != s1 && NULL != s2) {
        char *copy_s1 = mx_strdup(s1);
        char *s3 = mx_strcat(copy_s1, s2);
        return s3;
    }
    if (NULL == s1 && NULL != s2) {
        char *copy_s2 = mx_strdup(s2);
        return copy_s2;
    }
    if (NULL != s1 && NULL == s2) {
        char *copy_s1 = mx_strdup(s1);
        return copy_s1;
    }
    return NULL;
}
