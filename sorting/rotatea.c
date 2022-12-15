/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotatea.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:14:42 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/14 19:49:47 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotatea(t_s *stacks)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = ft_atoi(stacks->a[0]);
	while (j <= size(stacks->a))
	{
		if (k < ft_atoi(stacks->a[j]))
		{
			i = j;
			k = ft_atoi(stacks->a[j]);
		}
		j++;
	}
	if ((size(stacks->a) - i + 1) < i)
		while (ft_atoi(stacks->a[size(stacks->a)]) != k)
			flags(stacks, RR, A);
	else
		while (ft_atoi(stacks->a[size(stacks->a)]) != k)
			flags(stacks, R, A);
}
