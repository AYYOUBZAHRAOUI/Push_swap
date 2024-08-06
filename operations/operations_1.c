#include "../push_swap.h"


// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.

void sa(t_list **stacka)
{
    if (swap(stacka))
        write(1, "sa\n", 3);
}

// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.

void sb(t_list **stackb)
{
    if (swap(stackb))
        write(1, "sb\n", 3);
}

// ss : sa and sb at the same time.

void ss(t_list **stacka, t_list **stackb)
{
    if (swap(stacka) && swap(stackb)) // i need to verify if i cane use this one
        write(1, "ss\n", 3);
}

// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.

void pa(t_list **stackb, t_list **stacka)
{
    if (push(stackb, stacka))
        write(1, "pa\n", 3);
}

// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.

void pb(t_list **stacka, t_list **stackb)
{
    if (push(stacka, stackb))
        write(1, "pb\n", 3);
}

// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.

void ra(t_list **stacka)
{
    if (rotate(stacka))
        write(1, "ra\n", 3);
}

// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.

void rb(t_list **stackb)
{
    if (rotate(stackb))
        write(1, "rb\n", 3);
}

// rr : ra and rb at the same time.

void rr(t_list **stacka, t_list **stackb)
{
    if (rotate(stacka) && rotate(stackb)) // i need to verify if i cane use this one
        write(1, "rr\n", 3);
}

// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.

void rra(t_list **stacka)
{
    if (rv_rotate(stacka))
        write(1, "rra\n", 4);
}

// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.

void rrb(t_list **stackb)
{
    if (rv_rotate(stackb))
        write(1, "rrb\n", 4);
}

// rrr : rra and rrb at the same time.

void rrr(t_list **stacka, t_list **stackb)
{
    if (rv_rotate(stacka) && rv_rotate(stackb)) // i need to verify if i cane use this one
        write(1, "rrr\n", 4);
}
