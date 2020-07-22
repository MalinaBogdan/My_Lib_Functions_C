#include "../inc/libmx.h"

int mx_list_size(t_list*list) {
    if (list==NULL)
        return 0;
    int i=0;
    t_list *buf=list;
    while (buf!=NULL) {
        buf=buf->next;
        i++;
    }
    return i;
}

