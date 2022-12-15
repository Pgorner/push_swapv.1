/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:16:18 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/14 19:18:21 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_small(t_s *stacks)
{
	if (ft_atoi(stacks->a[0]) > ft_atoi(stacks->a[1])
		&& ft_atoi(stacks->a[0]) < ft_atoi(stacks->a[2])
		&& ft_atoi(stacks->a[1]) < ft_atoi(stacks->a[2]))
		flags(stacks, S, A);
	else if (ft_atoi(stacks->a[0]) > ft_atoi(stacks->a[1])
		&& ft_atoi(stacks->a[0]) > ft_atoi(stacks->a[2])
		&& ft_atoi(stacks->a[1]) > ft_atoi(stacks->a[2]))
	{
		flags(stacks, S, A);
		flags(stacks, RR, A);
	}
	else if (ft_atoi(stacks->a[0]) > ft_atoi(stacks->a[1])
		&& ft_atoi(stacks->a[0]) > ft_atoi(stacks->a[2])
		&& ft_atoi(stacks->a[1]) < ft_atoi(stacks->a[2]))
		flags(stacks, R, A);
	else if (ft_atoi(stacks->a[0]) < ft_atoi(stacks->a[1])
		&& ft_atoi(stacks->a[0]) < ft_atoi(stacks->a[2])
		&& ft_atoi(stacks->a[1]) > ft_atoi(stacks->a[2]))
	{
		flags(stacks, S, A);
		flags(stacks, R, A);
	}
	else if (ft_atoi(stacks->a[0]) < ft_atoi(stacks->a[1])
		&& ft_atoi(stacks->a[0]) > ft_atoi(stacks->a[2])
		&& ft_atoi(stacks->a[1]) > ft_atoi(stacks->a[2]))
		flags(stacks, RR, A);
}
/*
void	sort_small(t_s *stacks)
{
	if (ft_atoi(stacks->a[0]) > ft_atoi(stacks->a[1])
		&& ft_atoi(stacks->a[1]) < ft_atoi(stacks->a[2])
		&& ft_atoi(stacks->a[2]) > ft_atoi(stacks->a[0]))
		flags(stacks, S, A);
	else if (ft_atoi(stacks->a[0]) > ft_atoi(stacks->a[1])
		&& ft_atoi(stacks->a[1]) > ft_atoi(stacks->a[2])
		&& ft_atoi(stacks->a[2]) < ft_atoi(stacks->a[0]))
	{
		flags(stacks, S, A);
		flags(stacks, RR, A);
	}
	else if (ft_atoi(stacks->a[0]) > ft_atoi(stacks->a[1])
		&& ft_atoi(stacks->a[1]) < ft_atoi(stacks->a[2])
		&& ft_atoi(stacks->a[2]) < ft_atoi(stacks->a[0]))
		flags(stacks, R, A);
	else if (ft_atoi(stacks->a[0]) < ft_atoi(stacks->a[1])
		&& ft_atoi(stacks->a[1]) > ft_atoi(stacks->a[2])
		&& ft_atoi(stacks->a[2]) > ft_atoi(stacks->a[0]))
	{
		flags(stacks, S, A);
		flags(stacks, R, A);
	}
	else if (ft_atoi(stacks->a[0]) < ft_atoi(stacks->a[1])
		&& ft_atoi(stacks->a[1]) > ft_atoi(stacks->a[2])
		&& ft_atoi(stacks->a[2]) < ft_atoi(stacks->a[0]))
		flags(stacks, RR, A);
}
 */
