/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 05:49:23 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/09/08 05:49:24 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// rrr : rra and rrb at the same time.
void	rrr(t_list **stacka, t_list **stackb)
{
	if (rv_rotate(stacka) && rv_rotate(stackb))
		write(1, "rrr\n", 4);
}
