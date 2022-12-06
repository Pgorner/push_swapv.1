/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:48:31 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/06 17:46:54 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sortedbig(t_s *stacks)
{
	int	i;

	i = size(stacks->a);
	while (i > 0 && stacks->a[i] < stacks->a[i - 1])
		--i;
	if (!(stacks->a[i] < stacks->a[i - 1]))
		return (NO);
	return (YES);
}

int	sorted(t_s *stacks)
{
	if (size(stacks->a) == 1)
		return (YES);
	if (size(stacks->a) == 2)
		if (size(&stacks->a[1]) < size(&stacks->a[0]))
			return (YES);
	if (size(stacks->a) == 3)
		if (size(&stacks->a[2]) < size(&stacks->a[1])
			&& size(&stacks->a[1]) < size(&stacks->a[0]))
			return (YES);
	if (size(stacks->a) > 3)
		if (sortedbig(stacks) == YES)
			return (YES);
	return (NO);
}
