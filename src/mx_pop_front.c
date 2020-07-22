#include "../inc/libmx.h"

void mx_pop_front(t_list **list) {
    if (list == NULL)
        return;
    t_list *buf = *list;
    if (buf == NULL)
        return;
    *list=buf->next;
    free(buf);
}
