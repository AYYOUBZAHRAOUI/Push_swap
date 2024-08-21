#include "../include/push_swap.h"


int verif1(char *x)
{
    int i;
    if (!(1 <= ft_strlen(x) && ft_strlen(x) <= 11))
        return (0);

    i = 0;
    if (x[i] == '-')
    {
        if(ft_strlen(x) == 1)
            return (0);
        i++;
    }

    while (x[i])
    {
        if (ft_isdigit(x[i]))
            i++;
        else
            return (0);
    }
    return (1);
}

int verif2(t_list *lst,long int k)
{
    if ((INT_MIN <= k && k <= INT_MAX))
    {
        while (lst != NULL)
        {
           if (*((int *)(lst->content)) == (int)k)
              return (0);
           lst = lst->next;
        }
        return (1);
    }
    return (0);
}
