/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:54:05 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/07 20:12:08 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	place(t_s *stacks, int i)
{
	stacks->speed = 0;
	if ((size(stacks->a) - i) > i || (size(stacks->a) - i) == i)
		stacks->speed = stacks->speed + i;
	else
		stacks->speed = stacks->speed + (size(stacks->a) - i)
}

int	nextlowernumber(t_s *stacks, int i)
{
	int low;
	int j;

	j = 0;
	low = 0;
	while (j <= size(stacks->b))
	{
		if (ft_atoi(stacks->b[low]) <= ft_atoi(stacks->b[j])
			&& ft_atoi(stacks->b[j]) < ft_atoi(stacks->a[i]))
			low = j;
		++j;
	}
	return (low);
}

int	nexthighernumber(t-s *stacks, int i)
{
	int hi;
	int j;

	j = 0;
	hi = 0;
	while (j <= size(stacks->b))
	{
		if (ft_atoi(stacks->b[low]) < ft_atoi(stacks->b[j])
			&& ft_atoi(stacks->b[j]) > ft_atoi(stacks->a[i]))
			hi = j;
		++j;
	}
	return (hi);
}

void	maxormin(t_s *stacks, int i)
{
	int n;
	int cnttop;
	int cntbot;

	n = 0;
	while (n <= size(stacks->b))
	{
		if (ft_atoi(stacks->b[n]) == (ft_atoi(stacks->a[i] - 1))
			cnttop = n;
		++n;
	}
	n = size(stacks->b);
	while (n >= 0)
	{
		if (ft_atoi(stacks->b[n]) == (ft_atoi(stacks->a[i] + 1))
			cntbot = n;
		--n;
	}
	if (cnttop < cntbot)
		stacks->speed = stacks->speed + cnttop;
	else
		stacks->speed = stacks->speed + cntbot;

}

void	operations(t_s *stacks)
{
	i = size(stacks->a)

	while (i > -1) //goes through the whole stack
	{
		place(stacks, i); // finds out fastest way to get num from a to top
		maxmin(stacks, i); // finds out max or min number clos
		if (speed < prevspeed)
			num = i;
		prevspeed = speed;
		--i;
	}
}

void	sort(t_s *stacks)
{
	flags(stacks, P, B);
	flags(stacks, P, B);
	while (size(stacks->a) != -1)
	{
		operations(stacks);
		//sortit(stacks);
	}
	printf("%d", speed);
	printf("%d", num);
	while (size(stacks->b) != -1)
		flags(stacks, P, A);

}
