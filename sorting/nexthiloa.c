/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nexthiloa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:19:29 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/14 18:49:05 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	nextlowernumbera(t_s *stacks, int i)
{
	int	low;
	int	j;

	if (stacks->b[i] < 0)
		return (nextlonega(stacks, i));
	j = 0;
	low = 0;
	while (j <= size(stacks->a))
	{
		if (ft_atoi(stacks->a[low]) < ft_atoi(stacks->a[j])
			&& ft_atoi(stacks->a[j]) < ft_atoi(stacks->b[i]))
			low = j;
		++j;
	}
	if (ft_atoi(stacks->a[low]) > ft_atoi(stacks->b[i]))
		return (-1);
	else
		return (low);
}

int	nexthighernumbera(t_s *stacks, int i)
{
	int hi;
	int j;

	hi = 0;
	j = 0;
	while (j <= size(stacks->a))
	{
		if (ft_atoi(stacks->a[hi]) < ft_atoi(stacks->a[j]))
			hi = j;
		++j;
	}
	j = 0;
	while (j <= size(stacks->a))
	{
		if (ft_atoi(stacks->a[hi]) > ft_atoi(stacks->a[j])
		&& ft_atoi(stacks->a[j]) > ft_atoi(stacks->b[i]))
				hi = j;
		++j;
	}
	if (ft_atoi(stacks->a[hi]) < ft_atoi(stacks->b[i]))
		return (-1);
	else
		return (hi);
}

void	positiona(t_s *stacks, int i)
{
	int k;
	int j;

	k = (0 - nextlowernumbera(stacks, i)) * -1;
	j = size(stacks->a) - nextlowernumbera(stacks, i) + 1;
	if (i > j)
		stacks->speed = stacks->speed + j;
	else
		stacks->speed = stacks->speed + k;
}

