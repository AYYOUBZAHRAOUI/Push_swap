/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 05:43:30 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/09/08 05:45:49 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// swap function
// what this function while be do
// this function while swap the fist to element in the linked list
int	swap(t_list **p)
{
	t_list	*x;

	if (*p == NULL || (*p)->next == NULL)
		return (0);
	x = *p;
	*p = (*p)->next;
	x->next = (*p)->next;
	(*p)->next = x;
	return (1);
}

// rotate function
// the first element in the linked list become the last element

int	rotate(t_list **p)
{
	t_list	*x;
	t_list	*y;

	if (*p == NULL || (*p)->next == NULL)
		return (0);
	x = *p;
	y = ft_lstlast(*p);
	*p = (*p)->next;
	y->next = x;
	x->next = NULL;
	return (1);
}

// rv_rotate function
// the last element int the linked list become the first one

int	rv_rotate(t_list **p)
{
	t_list	*x;
	t_list	*lst;

	if (*p == NULL || (*p)->next == NULL)
		return (0);
	x = *p;
	lst = *p;
	*p = ft_lstlast(*p);
	while (lst->next->next != NULL)
		lst = lst->next;
	lst->next = NULL;
	(*p)->next = x;
	return (1);
}

// push function
// take two linked list x ,y
// take the first element of x and put it at the top of y;
// push take is **x and *y 
int	push(t_list **x, t_list **y)
{
	t_list	*z;

	if (*x == NULL)
		return (0);
	z = *y;
	*y = *x;
	*x = (*x)->next;
	(*y)->next = z;
	return (1);
}
