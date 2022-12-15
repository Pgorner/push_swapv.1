/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationsa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:15:20 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/15 19:31:09 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	placea(t_s *stacks, int i)
{
	int hi;
	int lo;
	int o;

	hi = 0;
	lo = 0;
	o = i;
	while (o++ <= size(stacks->a))
		++lo;
	o = i;
	while (o-- > 0)
		++hi;
	if (hi > lo)
		stacks->speed = lo;
	else if (lo > hi)
		stacks->speed = hi;
	else if (lo == hi)
		stacks->speed = lo;
}

void	highb(t_s *stacks, int i)
{
	int hi;
	int lo;
	int o;

	hi = 1;
	lo = 0;
	o = i;
	while (o++ <= size(stacks->b))
		++lo;
	o = i;
	while (o-- > 0)
		++hi;
	if (hi > lo)
		stacks->speed = stacks->speed + lo;
	else if (lo > hi)
		stacks->speed = stacks->speed + hi;
	else if (lo == hi)
		stacks->speed = stacks->speed + lo;
}

void	lowb(t_s *stacks, int i)
{
	int hi;
	int lo;
	int o;

	hi = 0;
	lo = 0;
	o = i;
	while (o++ <= size(stacks->b))
		++lo;
	o = i;
	while (o-- > 0)
		++hi;
	if (hi > lo)
		stacks->speed = stacks->speed + lo;
	else if (lo > hi)
		stacks->speed = stacks->speed + hi;
	else if (lo == hi)
		stacks->speed = stacks->speed + lo;
}

void    placeinb(t_s *stacks, int i)
{
	int lo;
	int hi;

	hi = 0;
	lo = 0;
	lo = nextlowernumberb(stacks, i); //num of swaps to get to top
	hi = size(stacks->b) - nexthighernumberb(stacks, i); //num of swaps to get to bottom
	if (((lo < hi && nextlowernumberb(stacks, i) != -1)
	|| nexthighernumberb(stacks, i) == -1)
	|| lo == hi)
		stacks->speed = stacks->speed + lo;
	if ((hi < lo && nexthighernumberb(stacks, i) != -1)
	|| nextlowernumberb(stacks, i) == -1)
		stacks->speed = stacks->speed + hi;
}

void	operationsa(t_s *stacks)
{
	int i;

	i = 0;
	stacks->num = 0;
	stacks->ispeed = INT_MAX;
	stacks->prevspeed = INT_MAX;
	while (i <= size(stacks->a))
	{
		placea(stacks, i);
		placeinb(stacks, i);
		if (stacks->speed < stacks->prevspeed
			&& stacks->speed < stacks->ispeed)
		{
			stacks->ispeed = stacks->speed;
			stacks->num = i;
		}
		stacks->prevspeed = stacks->speed;
		stacks->speed = 0;
		++i;
	}
}
