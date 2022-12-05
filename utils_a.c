/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:16:03 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/05 20:07:54 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_s *stacks)
{
	if (size(stacks->a) != 0 || size(stacks->a) != 1)
	{
		stacks->tmp[0] = stacks->a[size(stacks->a)];
		stacks->a[size(stacks->a)] = stacks->a[size(stacks->a) - 1];
		stacks->a[size(stacks->a) - 1] = stacks->tmp[0];
	}
}

void	pa(t_s *stacks)
{
	if (size(stacks->b) != 0)
	{
		stacks->b[size(stacks->b)] = stacks->a[size(stacks->a) + 1];
		stacks->b[size(stacks->b)] = NULL;
	}
}

void	ra(t_s *stacks)
{
	int	i;
	int	j;

	j = 1;
	i = size(stacks->a);
	stacks->a[0] = stacks->tmp[0];
	while (j <= i)
	{
		stacks->a[j] = stacks->a[j - 1];
		++j;
	}
	stacks->tmp[0] = stacks->a[i];
}

void	rra(t_s *stacks)
{
	int	i;
	int	j;

	i = size(stacks->a);
	j = i - 1;
	stacks->a[i] = stacks->tmp[0];
	while (j >= 0)
	{
		stacks->a[j] = stacks->a[j + 1];
		--j;
	}
	stacks->tmp[0] = stacks->a[0];
}
