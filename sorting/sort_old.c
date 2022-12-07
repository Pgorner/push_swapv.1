/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:22:38 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/07 18:42:37 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_small(t_s *stacks)
{
	if (ft_atoi(stacks->a[0]) == 2 && ft_atoi(stacks->a[1]) == 1
		&& ft_atoi(stacks->a[2]) == 3)
		flags(stacks, S, A);
	else if (ft_atoi(stacks->a[0]) == 3 && ft_atoi(stacks->a[1]) == 2
		&& ft_atoi(stacks->a[2]) == 1)
	{
		flags(stacks, S, A);
		flags(stacks, RR, A);
	}
	else if (ft_atoi(stacks->a[0]) == 3 && ft_atoi(stacks->a[1]) == 1
		&& ft_atoi(stacks->a[2]) == 2)
		flags(stacks, R, A);
	else if (ft_atoi(stacks->a[0]) == 1 && ft_atoi(stacks->a[1]) == 3
		&& ft_atoi(stacks->a[2]) == 2)
	{
		flags(stacks, S, A);
		flags(stacks, R, A);
	}
	else if (ft_atoi(stacks->a[0]) == 2 && ft_atoi(stacks->a[1]) == 3
		&& ft_atoi(stacks->a[2]) == 1)
		flags(stacks, RR, A);
}

void	sort_medium(t_s *stacks)
{
	while (sorted(stacks) == NO)
	{
		flags(stacks, P, B);
		sort_small(stacks);
		flags(stacks, P, A);
		if (sorted(stacks) == YES)
			break;
	}
}

void	sort(t_s *stacks)
{
	int	i;

	printf("starting sorting thing\n");
	i = size(stacks->a);
	if (i <= 2)
	{
		printf("izza small stackystack\n");
		sort_small(stacks);
	}
	if (5 > i && i > 2)
	{
		printf("izza medium stackystack\n");
		sort_medium(stacks);
	}
	else if (i > 4)
	{
		printf("izza biggest stackystack\n");
		//sort_big(stacks);
	}
	else
		printf("fuck");
}
/*
		j = 0;
		i = size(stacks->a);
		while (j <= i)
		{
			printf("stack a while %s\n", stacks->a[j]);
			++j;
		}
 */
