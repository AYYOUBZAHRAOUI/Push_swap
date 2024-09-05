#include "../include/push_swap.h"


void show_stack(t_list *stack)
{

    while (stack != NULL)
    {
        printf("int = %i index = %i\n", *((int *)(stack->content)), stack->index);
        stack = stack->next;
        
    }
}

int main(int argc, char **argv)
{
    t_list *stacka;
    //t_list *stackb = NULL;

    stacka = NULL;
    if (argc < 2)
        return (write(2, "error\n", 6), 1);
    stacka = creat_stacka(argc - 1, argv + 1);
    if (stacka == NULL)
        return (write(2, "error\n", 6), 1);
    // indexing_by_order(stacka);
    // show_stack(stacka);
    sorting(stacka);


    return (0);
}

