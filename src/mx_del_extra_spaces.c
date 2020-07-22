#include "../inc/libmx.h"

bool mx_isspace(char c) { return c == ' '; }

char *mx_del_extra_spaces(const char *str) {
    if (!str) return NULL;

    char *trimmedString = mx_strtrim(str);

    int trimmedstrLength = mx_strlen(trimmedString);

    int length = 0;

    while (*trimmedString != '\0') {
        if (!(mx_isspace(*trimmedString)))
            length++, trimmedString++;
        else if (mx_isspace(*trimmedString)) {
            length++;
            while (mx_isspace(*trimmedString)) trimmedString++;
        }
    }

    trimmedString = trimmedString - trimmedstrLength;

    char *noExtraWhitespace = mx_strnew(length);

    int i = 0;
    int j = 0;
    while (i < trimmedstrLength) {
        if (!(mx_isspace(trimmedString[i]))) {
            noExtraWhitespace[j] = trimmedString[i];
            j++;
            i++;
        } else if (mx_isspace(trimmedString[i])) {
            noExtraWhitespace[j] = trimmedString[i];
            j++;
            i++;
            while (mx_isspace(trimmedString[i])) i++;
        }
    }
    printf("%s", noExtraWhitespace);

    mx_strdel(&trimmedString);
    return noExtraWhitespace;
}
