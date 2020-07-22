#include "../inc/libmx.h"

void mx_pop_back(t_list **list) {
    if (list==NULL)
        return;
    t_list *buf = *list;
    t_list *prev = NULL;
    if (buf == NULL)
        return;
    while (buf->next != NULL) {
        prev = buf;
        buf = buf->next;
    }
    if (prev == NULL)
        *list = NULL;
    else {
        prev->next = NULL;
    }
    free(buf);
}
