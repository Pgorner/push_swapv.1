/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:27:03 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/07 17:31:52 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_s *stacks)
{
	if (size(stacks->b) != 0 || size(stacks->b) != 1)
	{
		stacks->tmp[0] = stacks->b[0];
		stacks->b[0] = stacks->b[1];
		stacks->b[1] = stacks->tmp[0];
	}
}

void	pb(t_s *stacks)
{
	if (size(stacks->a) != -1)
	{
		stacks->b[size(stacks->b) + 1] = stacks->a[size(stacks->a)];
		stacks->a[size(stacks->a)] = NULL;
	}
}

void	rb(t_s *stacks)
{
	int	i;
	int	j;

	j = 0;
	i = size(stacks->b);
	stacks->tmp[0] = stacks->b[0];
	while (j < i)
	{
		stacks->b[j] = stacks->b[j + 1];
		++j;
	}
	stacks->b[i] = stacks->tmp[0];
}

void	rrb(t_s *stacks)
{
	int	i;

	i = size(stacks->b);
	stacks->tmp[0] = stacks->b[i];
	while (i >= 1)
	{
		stacks->b[i] = stacks->b[i - 1];
		--i;
	}
	stacks->b[0] = stacks->tmp[0];
}
