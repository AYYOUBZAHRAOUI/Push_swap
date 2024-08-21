/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:26:44 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/20 05:37:24 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void   *ft_calloc(size_t count, size_t size)
{
	void    *p;
	size_t  total;

	if (count == 0 || size == 0)
	{
		p = malloc(size * count);
		if (p == NULL)
			return (NULL);
		ft_bzero(p, size * count);
		return (p);
	}
	total = count * size;
	if (total / count != size)
		return (NULL);
	p = malloc(total);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*p;

	i = 0;
	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	j = ft_strlen(s);
	p = ft_calloc(j + 1, 1);
	if (p == NULL)
		return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	return (p);
}
