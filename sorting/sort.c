/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:54:05 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/12 13:59:51 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	place(t_s *stacks, int i)
{
	int hi;
	int lo;
	int o;

	hi = 0;
	lo = 0;
	o = i;
	while (o <= size(stacks->a))
	{
		++o;
		++lo;
	}
	o = i;
	while (o > 0)
	{
		--o;
		++hi;
	}
	//if ()
	if (hi > lo)
		stacks->speed = lo;
	else if (lo > hi)
		stacks->speed = hi;
	else if (lo == hi)
		stacks->speed = lo;
}

int	placereturn(t_s *stacks, int i)
{
	int hi;
	int lo;
	int o;

	hi = 0;
	lo = 0;
	o = i;
	while (o <= size(stacks->a))
	{
		++o;
		++lo;
	}
	o = i;
	while (o > 0)
	{
		--o;
		++hi;
	}
	if (hi > lo)
		return (lo);
	else if (lo > hi)
		return (hi);
	else if (lo == hi)
		return (lo);
	return (0);
}

int	actionreturn(t_s *stacks, int i)
{
	int hi;
	int lo;
	int o;

	hi = 0;
	lo = 0;
	o = i;
	while (o <= size(stacks->a))
	{
		++o;
		++lo;
	}
	o = i;
	while (o > 0)
	{
		--o;
		++hi;
	}
	if (hi > lo)
		return (1);
	else if (lo > hi)
		return (2);
	else if (lo == hi)
		return (1);
	return (0);
}

int	nextlowernumber(t_s *stacks, int i)
{
	int	low;
	int	j;

	j = 0;
	low = 0;
	while (j <= size(stacks->b))
	{
		//printf("LO : if %i > %i && %i < %i\n", ft_atoi(stacks->b[low]), ft_atoi(stacks->b[j]), ft_atoi(stacks->b[j]), ft_atoi(stacks->a[i]));
		if (ft_atoi(stacks->b[low]) < ft_atoi(stacks->b[j])
			&& ft_atoi(stacks->b[j]) < ft_atoi(stacks->a[i]))
			low = j;
		++j;
	}
	if (ft_atoi(stacks->b[low]) > ft_atoi(stacks->a[i]))
		return (-1);
	else
		return (low);
}

int	nexthighernumber(t_s *stacks, int i)
{
	int hi;
	int j;

	hi = 0;
	j = 0;
	while (j <= size(stacks->b))
	{
		if (ft_atoi(stacks->b[hi]) < ft_atoi(stacks->b[j]))
			hi = j;
		++j;
	}
	j = 0;
	while (j <= size(stacks->b))
	{
		//printf("HI : if %i > %i && %i > %i\n", ft_atoi(stacks->b[hi]), ft_atoi(stacks->b[j]), ft_atoi(stacks->b[j]), ft_atoi(stacks->a[i]));
		if (ft_atoi(stacks->b[hi]) > ft_atoi(stacks->b[j])
		&& ft_atoi(stacks->b[j]) > ft_atoi(stacks->a[i]))
				hi = j;
		++j;
	}
	if (ft_atoi(stacks->b[hi]) < ft_atoi(stacks->a[i]))
		return (-1);
	else
		return (hi);
}

void	hilow(t_s *stacks, int i)
{
	if (placereturn(stacks, nexthighernumber(stacks, i))
	> placereturn(stacks, nextlowernumber(stacks, i)))
		stacks->speed = stacks->speed + placereturn(stacks, nextlowernumber(stacks, i));
	if (placereturn(stacks, nexthighernumber(stacks, i))
	< placereturn(stacks, nextlowernumber(stacks, i)))
		stacks->speed = stacks->speed + placereturn(stacks, nexthighernumber(stacks, i));
/* 	if (placereturn(stacks, nexthighernumber(stacks, i))
	== placereturn(stacks, nextlowernumber(stacks, i)))
		stacks->speed = stacks->speed + placereturn(stacks, nextlowernumber(stacks, i)); */
}

int	actionhilow(t_s *stacks, int i)
{
	if (placereturn(stacks, nexthighernumber(stacks, i))
	> placereturn(stacks, nextlowernumber(stacks, i))
	|| (nexthighernumber(stacks, i) == -1))
		if (nextlowernumber(stacks, i) != -1)
			return (nextlowernumber(stacks, i));
	if (placereturn(stacks, nexthighernumber(stacks, i))
	< placereturn(stacks, nextlowernumber(stacks, i))
	|| (nextlowernumber(stacks, i) == -1))
		return (nexthighernumber(stacks, i));
	//printf("nextlo: %i \n placereturn: %i \n nexthi: %i \n placereturn: %i \n", nextlowernumber(stacks, i), placereturn(stacks, nextlowernumber(stacks, i)), nexthighernumber(stacks, i), placereturn(stacks, nexthighernumber(stacks, i)));
	else
		return (nextlowernumber(stacks, i));
}
/* 	return (printf("FUCK"), 0); */
	/* (placereturn(stacks, nexthighernumber(stacks, i))
	== placereturn(stacks, nextlowernumber(stacks, i))) */

void	operations(t_s *stacks)
{
	int i;

	stacks->prevspeed = INT_MAX;
	i = 0;
	if (size(stacks->a) == 0)
		stacks->num = 0;
	else
		while (i <= size(stacks->a)) //goes through the whole stack
	{
		//printf("NUMBER HANDLED: %s\n", stacks->a[i]);
		//printf("    speed bf place: %d\n", stacks->speed);
		place(stacks, i); // finds out fastest way to get num from a to top
		//printf("    speed af place: %d\n", stacks->speed);
		hilow(stacks, i); //finds out if next highest or next lowest number is faster to reach
		//printf("    speed af hilo: %d\n", stacks->speed);
		//maxormin(stacks, i); // finds out max or min number clos
/* 		if (stacks->speed < stacks->prevspeed
			&& stacks->speed < stacks->num) //speed of current int
			stacks->num = i; */
		//printf("next lower number in stack to %s is %s retval: %i\n", stacks->a[i], stacks->b[nextlowernumber(stacks, i)], nextlowernumber(stacks, i));
		//printf("next higher number in stack to %s is %s retval: %i\n", stacks->a[i], stacks->b[nexthighernumber(stacks, i)], nexthighernumber(stacks, i));
		if (stacks->speed < stacks->prevspeed)
			stacks->num = i;
		//printf("prevspeed: %d\n", stacks->prevspeed);
		//printf("    speed: %d\n", stacks->speed);
		//printf("      num: %d\n", stacks->num);
		stacks->prevspeed = stacks->speed;
		++i;
		stacks->speed = 0;
	}
}

void	sortit(t_s *stacks)
{
	int i;
	int j;

	j = 0;
	i = ft_atoi(stacks->a[stacks->num]);
	j = ft_atoi(stacks->b[actionhilow(stacks, stacks->num)]);
	if (actionreturn(stacks, stacks->num) == 1)
		while (i != ft_atoi(stacks->a[0]))
			flags(stacks, RR, A);
	if (actionreturn(stacks, stacks->num) == 2)
		while (i != ft_atoi(stacks->a[0]))
			flags(stacks, R, A);
	if (j > ft_atoi(stacks->a[0]))
		while (j != ft_atoi(stacks->b[size(stacks->b)]))
			flags(stacks, RR, B);
	if (j < ft_atoi(stacks->a[0]))
		while (j != ft_atoi(stacks->b[0]))
			flags(stacks, R, B);
	flags(stacks, P, B);
}

void	sort(t_s *stacks)
{
/* 	int j; */

	if (size(stacks->b) == -1)
	{
		flags(stacks, P, B);
		flags(stacks, P, B);
	}
	while (size(stacks->a) != -1)
	{
		operations(stacks);
		sortit(stacks);
	}
}

/* 		j = 0;
		while (j<5)
		{
			//printf("stack a: %s stack b: %s\n", stacks->a[j], stacks->b[j]);
			j++;
		} */
/* ./push swap 1 4 8 7
stacks->a[0] = 1
stacks->a[1] = 4
stacks->a[2] = 8
stacks->a[3] = 7

pb

stacks->a[0] = 4	stacks->b[0] = 1
stacks->a[1] = 8
stacks->a[2] = 7
*/

