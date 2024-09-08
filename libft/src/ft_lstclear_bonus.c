/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:17:29 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/09/08 05:38:01 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	while (del != NULL && lst != NULL && *lst != NULL)
	{
		p = *lst;
		*lst = (*lst)->next;
		if (p->content != NULL)
			del(p->content);
		free(p);
	}
}
