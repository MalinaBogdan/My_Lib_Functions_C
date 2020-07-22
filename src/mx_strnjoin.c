#include "../inc/libmx.h"

char *mx_strnjoin(char const *s1, char const *s2, long long len){

    if ( s1 == NULL && s2 == NULL)
        return NULL;
    if (s1 == NULL){
        char *returnValue = mx_strnew(mx_strlen(s2));
        return mx_strcpy(returnValue, s2);
    }
    if (s2 == NULL){
        char *returnValue = mx_strnew(mx_strlen(s1));
        return mx_strcpy(returnValue, s1);
    }

    char *s1part = mx_strnew(len + mx_strlen(s2));

    s1part = mx_strncpy(s1part ,s1, len);

    return mx_strcat(s1part, s2);
}
