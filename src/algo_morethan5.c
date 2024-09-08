/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_morethan5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 06:50:27 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/09/08 15:50:41 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sorttohanderd(t_list **stack, int r_max)
{
	t_list	*stack_b;
	int		r_min;

	r_min = 0;
	stack_b = NULL;
	indexing_by_order(*stack);
	while (*stack != NULL)
	{
		if ((*stack)->index < r_min && ++r_min & ++r_max)
		{
			pb(&stack_b, stack);
			rb(&stack_b);
		}
		else if (r_min <= (*stack)->index && (*stack)->index <= r_max 
			&& ++r_max && ++r_min)
			pb(&stack_b, stack);
		else
			ra(stack);
	}
	big_pa(stack, &stack_b);
}

void	big_pa(t_list **stack, t_list **stack_b)
{
	int	higher;

	while (*stack_b != NULL)
	{
		higher = higher_int(*stack_b);
		while (*((int *)((*stack_b)->content)) != higher)
		{
			if (index_of_higher(*stack_b) <= ft_lstsize(*stack_b) / 2)
				rb(stack_b);
			else
				rrb(stack_b);
		}
		pa(stack, stack_b);
	}
}

// this function take the header of linked list 
// and return the index of higher int in the linked list
int	index_of_higher(t_list *stack)
{
	int	i;
	int	higher;

	higher = higher_int(stack);
	i = 0;
	while (stack != NULL)
	{
		if (*((int *)(stack->content)) != higher)
			i++;
		else
			break ;
		stack = stack->next;
	}
	return (i);
}

// this () take the header of linked list 
// and indexing by order
int	get_index(t_list *stack, int n)
{
	int		i;

	i = 0;
	while (stack != NULL)
	{
		if (n > *((int *)(stack->content)))
			i++;
		stack = stack->next;
	}
	return (i);
}

// this function take the header of linked list
// and indexing by order
void	indexing_by_order(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (stack != NULL)
	{
		stack->index = get_index(tmp, *((int *)(stack->content)));
		stack = stack->next;
	}
}
