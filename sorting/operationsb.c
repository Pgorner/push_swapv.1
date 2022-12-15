/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationsb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:15:20 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/14 18:31:03 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	placeb(t_s *stacks, int i)
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
		stacks->speed = lo;
	else if (lo > hi)
		stacks->speed = hi;
	else if (lo == hi)
		stacks->speed = lo;
}

void	higha(t_s *stacks, int i)
{
	int hi;
	int lo;
	int o;

	hi = 1;
	lo = 0;
	o = i;
	while (o++ <= size(stacks->a))
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

void	lowa(t_s *stacks, int i)
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
		stacks->speed = stacks->speed + lo;
	else if (lo > hi)
		stacks->speed = stacks->speed + hi;
	else if (lo == hi)
		stacks->speed = stacks->speed + lo;
}

void    placeina(t_s *stacks, int i)
{
	int lo;
	int hi; 

	hi = 0;
	lo = 0;
	lo = nextlowernumbera(stacks, i); //num of swaps to get to top
	hi = size(stacks->a) - nexthighernumbera(stacks, i); //num of swaps to get to bottom
	if (((lo < hi && nextlowernumbera(stacks, i) != -1)
	|| nexthighernumbera(stacks, i) == -1)
	|| lo == hi)
		stacks->speed = stacks->speed + lo;
	if ((hi < lo && nexthighernumbera(stacks, i) != -1)
	|| nextlowernumbera(stacks, i) == -1)
		stacks->speed = stacks->speed + hi;
}

void	operationsb(t_s *stacks)
{
	int i;

	stacks->num = 0;
	stacks->ispeed = INT_MAX;
	stacks->prevspeed = INT_MAX;
	i = 0;
		while (i <= size(stacks->b))
	{
		placea(stacks, i); // finds out plac ein stack and how many moves to top
		placeina(stacks, i); //finds out how much moves to rotate stack b for correnct placement
		//printf("AF PLACEB: %i STACKS NUM = %i MEANING: %s\n\n",stacks->speed, stacks->num, stacks->a[i]);
        
        if (stacks->speed < stacks->prevspeed
			&& stacks->speed < stacks->ispeed)
		{
			stacks->ispeed = stacks->speed;
			stacks->num = i;
		}
/* 		printf("bfprevspeed: %d\n", stacks->prevspeed);
		printf("    speed: %d\n", stacks->speed);
		printf("      num: %d\n\n", stacks->num); */
		stacks->prevspeed = stacks->speed;
		stacks->speed = 0;
		++i;
	}
}