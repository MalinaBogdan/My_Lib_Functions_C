#include "../inc/libmx.h"

// bool cmp(void *a, void *b) {
//     char *ta = a;
//     char *tb = b;
//     if (mx_strcmp(ta, tb) > 0) {
//         return true;
//     } else {
//         return false;
//     }
// }

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    if (!list) return NULL;

    for (t_list *i = list; i->next != NULL; i = i->next) {
        t_list *sorted = i;

        for (t_list *j = i->next; j != NULL; j = j->next)
            if (cmp(sorted->data, j->data)) sorted = j;

        void *temp = sorted->data;
        sorted->data = i->data;
        i->data = temp;
    }
    return list;
}
