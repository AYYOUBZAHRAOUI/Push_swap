/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss_pa_pb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 05:50:51 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/09/08 06:21:55 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.
void	sa(t_list **stacka)
{
	if (swap(stacka))
		write(1, "sa\n", 3);
}

// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
void	sb(t_list **stackb)
{
	if (swap(stackb))
		write(1, "sb\n", 3);
}

// ss : sa and sb at the same time.
void	ss(t_list **stacka, t_list **stackb)
{
	if (swap(stacka) && swap(stackb))
		write(1, "ss\n", 3);
}

// pa (push in a): 
// Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
void	pa(t_list **stacka, t_list **stackb)
{
	if (push(stackb, stacka))
		write(1, "pa\n", 3);
}

// pb (push in b): 
// Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.
void	pb(t_list **stackb, t_list **stacka)
{
	if (push(stacka, stackb))
		write(1, "pb\n", 3);
}
