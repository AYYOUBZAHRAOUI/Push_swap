#include "../include/push_swap.h"

// sort function
// this fuction calculate the size of stack and choose sorting algo
void sorting(t_list *stack)
{
    int stack_size;

    stack_size = ft_lstsize(stack);
    if (stack_size == 1)
        return;
    if (stack_size == 2)
        two_nodes(stack);
    else if (stack_size == 3)
        three_nodes(stack);
    else if (stack_size <= 5)
        five_nodes(stack);
}
// sort one node :
// just do nothing

// handel two node :
void two_nodes(t_list *stack)
{

    if (*((int *)(stack->content)) > *((int *)(stack->next->content)))
        sa(&stack);
    else
        return;
}

// sort three node :
int higher_int(t_list *stack)
{
    int x;

    x = *((int *)(stack->content));
    stack = stack->next;
    while (stack != NULL)
    {
        if (*((int *)(stack->content)) > x)
            x = *((int *)(stack->content));
        stack = stack->next;
    }
    return (x);
}

void three_nodes(t_list *stack)
{
    int higher;

    higher = higher_int(stack);
    if (*((int *)(stack->content)) == higher)
        ra(&stack);
    else if (*((int *)(stack->next->content)) == higher)
        rra(&stack);
    two_nodes(stack);
}

// sort 5 node
int lower_int(t_list *stack)
{
    int lower;

    lower = *((int *)(stack->content));
    stack = stack->next;
    while (stack != NULL)
    {
        if (*((int *)(stack->content)) < lower)
            lower = *((int *)(stack->content));
        stack = stack->next;
    }
    return (lower);
}

void five_nodes(t_list *stack)
{
    t_list *stackb;
    int lower;
    int i;

    i = 2;
    stackb = NULL;
    while (i--)
    {
        lower = lower_int(stack);
        while (lower != *((int *)(stack->content)))
            ra(&stack);
        pb(&stackb, &stack);
    }
    three_nodes(stack);
    pa(&stack, &stackb);
    pa(&stack, &stackb);
}