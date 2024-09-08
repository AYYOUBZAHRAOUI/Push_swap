/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 06:23:55 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/09/08 06:26:43 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// void show_stack(t_list *stack)
// {
//	 while (stack != NULL)
//	 {
//		 printf("int = %i index = %i\n", 
//	 	 *((int *)(stack->content)), stack->index);
//		 stack = stack->next;
//	 }
// }

// this verify if the stack is sorted or not
int	stack_is_sorted(t_list *stack)
{
	while (stack->next != NULL)
	{
		if (*((int *)(stack->content)) > *((int *)(stack->next->content)))
			return (0);
		stack = stack->next;
	}
	return (1);
}

// this main you know what it does
int	main(int argc, char **argv)
{
	t_list	*stacka;

	stacka = NULL;
	if (argc < 2)
		return (write(2, "Error\n", 6), 1);
	stacka = creat_stacka(argc - 1, argv + 1);
	if (stacka == NULL)
		return (write(2, "Error\n", 6), 1);
	sorting(&stacka);
	return (0);
}
