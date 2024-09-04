// i have a stack of 1000 elements or less.
// this stack is a linked list.
// the struct of this nodes is: node(content, next).
// the content is a integer.
// i need to create an algorithm sort this stack by order.
// !! by using specific operations sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr.

// !! the good thing is i cane use the other operations like comparisons, like wat i want.
// !! i cane use ore than one algorithm to solve this problem.
// i cane change the struct of the node to add more information if i need or other thing.




#include "../include/push_swap.h"

// algorithm 1 (proposed by chat gpt):
// step 1: calculate the median of the stack.
int median_stack(t_list *stacka)
{
    int x;
    int i;

    x = 0;
    i = 0;
    while (stacka != NULL)
    {
        x = *((int *)(stacka->content)) + x;
        i++;
        stacka = stacka->next;
    }
    x = x/i;
    return (x);
}

// step 2: pb all nodes less than the median and ra else
// ------------------------ fore len <= 3 -------------
// the algorithm is find the higher node and compare it with
// first node if it the fist node (ra) 
// if note is the first node you wile check if it the second node (rra)
// and check if the first to element are in the order else (sa)

// my problem is how to find the higher node
// i need to creat a function iterate in nodes and give me the higher node
// or i need just the higher value.
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

void first_algo(t_list *stacka)
{
    int higher;

    higher = higher_int(stacka);
    if (*((int *)(stacka->content)) == higher)
        ra(&stacka);
    else if (*((int *)(stacka->next->content)) == higher)
        rra(&stacka);
    if (*((int *)(stacka->content)) > *((int *)(stacka->next->content)))
        sa(&stacka);
}


