/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 05:28:48 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/09/11 16:21:36 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <unistd.h>
# include "../libft/include/libft.h"

// error_handling.c file have 2 function
int		verif1(char *x);
int		verif2(t_list *lst, long int k);

// input_file.c have 5 functions
t_list	*creat_stacka(int narg, char **argv);

// basic_operations.c
int		swap(t_list **p);
int		rotate(t_list **p);
int		rv_rotate(t_list **p);
int		push(t_list **x, t_list **y);

// operations
void	sa(t_list **stacka);
void	sb(t_list **stackb);
void	ss(t_list **stacka, t_list **stackb);
void	pa(t_list **stacka, t_list **stackb);
void	pb(t_list **stackb, t_list **stacka);
void	ra(t_list **stacka);
void	rb(t_list **stackb);
void	rr(t_list **stacka, t_list **stackb);
void	rra(t_list **stacka);
void	rrb(t_list **stackb);
void	rrr(t_list **stacka, t_list **stackb);

// algo functions
void	sorting(t_list **stack);
void	two_three_nodes(t_list **stack);
void	five_nodes(t_list **stack);
int		higher_int(t_list *stack);
int		lower_int(t_list *stack);

void	indexing_by_order(t_list *stack);
int		index_of_higher(t_list *stack);
void	sorttohanderd(t_list **stack, int r_max);
void	big_pa(t_list **stack, t_list **stack_b);
int		stack_is_sorted(t_list *stack);
// void	show_stack(t_list *stack);

#endif
