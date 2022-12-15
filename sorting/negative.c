/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   negative.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:43:06 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/15 20:27:16 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	nextlonega(t_s *stacks, int i)
{
	int	hi;
	int	j;

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
