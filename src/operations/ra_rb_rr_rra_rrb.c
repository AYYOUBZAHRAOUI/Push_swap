/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr_rra_rrb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 05:47:55 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/09/08 05:48:23 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.
void	ra(t_list **stacka)
{
	if (rotate(stacka))
		write(1, "ra\n", 3);
}

// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.
void	rb(t_list **stackb)
{
	if (rotate(stackb))
		write(1, "rb\n", 3);
}

// rr : ra and rb at the same time.
void	rr(t_list **stacka, t_list **stackb)
{
	if (rotate(stacka) && rotate(stackb)) 
		write(1, "rr\n", 3);
}

// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.
void	rra(t_list **stacka)
{
	if (rv_rotate(stacka))
		write(1, "rra\n", 4);
}

// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.
void	rrb(t_list **stackb)
{
	if (rv_rotate(stackb))
		write(1, "rrb\n", 4);
}
