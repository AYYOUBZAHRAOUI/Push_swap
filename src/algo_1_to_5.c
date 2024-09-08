/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_1_to_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 06:46:31 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/09/08 15:54:53 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// sort function
// this fuction calculate the size of stack and choose sorting algo
void	sorting(t_list **stack)
{
	int	stack_size;

	stack_size = ft_lstsize(*stack);
	if (stack_size == 1 || stack_is_sorted(*stack))
		return ;
	else if (stack_size <= 3)
		two_three_nodes(stack);
	else if (stack_size <= 5)
		five_nodes(stack);
	else if (stack_size <= 100)
		sorttohanderd(stack, 15);
	else
		sorttohanderd(stack, 30);
	ft_lstclear(stack, free);
}

// sort two three node :
int	higher_int(t_list *stack)
{
	int	x;

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

void	two_three_nodes(t_list **stack)
{
	int	higher;

	higher = higher_int(*stack);
	if (*((int *)((*stack)->content)) == higher)
		ra(stack);
	else if (*((int *)((*stack)->next->content)) == higher)
		rra(stack);
	if (*((int *)((*stack)->content)) > *((int *)((*stack)->next->content)))
		sa(stack);
}

// sort 5 node
int	lower_int(t_list *stack)
{
	int	lower;

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

void	five_nodes(t_list **stack)
{
	t_list	*stackb;
	int		lower;
	int		i;

	i = 2;
	stackb = NULL;
	lower = lower_int(*stack);
	if (*((int *)((ft_lstlast(*stack))->content)) == lower)
		rra(stack);
	while (i--)
	{
		lower = lower_int(*stack);
		while (lower != *((int *)((*stack)->content)))
			ra(stack);
		pb(&stackb, stack);
	}
	two_three_nodes(stack);
	pa(stack, &stackb);
	pa(stack, &stackb);
}
