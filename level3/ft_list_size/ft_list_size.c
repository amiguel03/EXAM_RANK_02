#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int i = 0;
    
    // Loop over list elements while the next element is not null
    while (begin_list->next)
    {
        // set the original pointer equal to a pointer to the
        // next element and increment our counter
        begin_list = begin_list->next;
        i++;
    }
    // return the counter
    return (i);
}
