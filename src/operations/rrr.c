#include "../../include/push_swap.h"

// rrr : rra and rrb at the same time.
void rrr(t_list **stacka, t_list **stackb)
{
    if (rv_rotate(stacka) && rv_rotate(stackb)) // i need to verify if i cane use this one
        write(1, "rrr\n", 4);
}
