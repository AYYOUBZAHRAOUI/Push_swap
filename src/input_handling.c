/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 06:28:54 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/09/08 06:37:18 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// this function take a int and return a pointer to it or NULL;
int	*intalloc(int n)
{
	int	*x;

	x = malloc(sizeof(int));
	if (x == NULL)
		return (NULL);
	*x = n;
	return (x);
}

// it ft_lstnew with a verification if the content is NULL;
t_list	*ft_lstnew_v2(int *content)
{
	t_list	*node;

	if (content == NULL)
		return (NULL);
	else
	{
		node = ft_lstnew(content);
		if (node == NULL)
			return (free(content), NULL);
		return (node);
	}
}

// free the split
void	free_split(char **p)
{
	int	i;

	i = 0;
	while (p[i])
		free(p[i++]);
	free(p);
}

// this function take a string (one argument) and return t_list or NULL;
t_list	*creat_short_lst(char *str, t_list *stacka)
{
	char	**ssplit;
	t_list	*sh_lst;
	t_list	*node;
	int		i;

	i = 0;
	ssplit = ft_split(str, ' ');
	sh_lst = NULL;
	while (ssplit[i])
	{
		if (verif1(ssplit[i]) && verif2(sh_lst, ft_atoi(ssplit[i])) 
			&& verif2(stacka, ft_atoi(ssplit[i])))
		{
			node = ft_lstnew_v2((intalloc((int)(ft_atoi(ssplit[i++])))));
			if (node == NULL)
				return (free_split(ssplit), ft_lstclear(&sh_lst, free), NULL);
			ft_lstadd_back(&sh_lst, node);
		}
		else
			return (free_split(ssplit), ft_lstclear(&sh_lst, free), NULL);
	}
	return (free_split(ssplit), sh_lst);
}

// this function take the argc - 1 and argv + 1 and return a t_list or NULL;
t_list	*creat_stacka(int narg, char **argv)
{
	int		i;
	t_list	*sh_lst;
	t_list	*stacka;

	i = 0;
	stacka = NULL;
	while (i < narg)
	{
		sh_lst = creat_short_lst(argv[i++], stacka);
		if (sh_lst == NULL)
			return (ft_lstclear(&stacka, free), NULL);
		ft_lstadd_back(&stacka, sh_lst);
	}
	return (stacka);
}
