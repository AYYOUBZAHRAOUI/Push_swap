/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:09 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/20 22:50:34 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total;

	if (count == 0 || size == 0)
	{
		p = malloc(size * count);
		if (p == NULL)
			return (NULL);
		ft_bzero(p, size * count);
		return (p);
	}
	total = count * size;
	printf("count %lu * %lu = \n", count , size);
	printf("total %lu\n", total);
	printf("total / count %lu\n", total / count);

	if (total / count != size)
		return (NULL);
	printf("total \n");

	p = malloc(total);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}
