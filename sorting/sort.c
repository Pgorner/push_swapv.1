/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:54:05 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/08 18:11:51 by pgorner          ###   ########.fr       */
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
	while (o < size(stacks->a))
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
	//printf("HI %i LO %i\n", hi, lo);
	if (hi > lo)
		stacks->speed = lo;
	else if (lo > hi)
		stacks->speed = hi;
	else if (lo == hi)
		stacks->speed = lo;
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
	int hi;
	int lo;
	int spacehi;
	int spacelo;
	//printf("next higher number: %i next lower number %i\n", ft_atoi(stacks->b[nexthighernumber(stacks, i)]), ft_atoi(stacks->b[nextlowernumber(stacks, i)]));
	spacehi = 0;
	spacelo = 0;
	hi = nexthighernumber(stacks, i);
	lo = nextlowernumber(stacks, i);
	printf("%s > %s | %s == -1\n", stacks->b[nexthighernumber(stacks, i)], stacks->b[nextlowernumber(stacks, i)], stacks->b[nexthighernumber(stacks, i)]);
		if ((size(stacks->b) - hi) < hi)
		{
			spacehi = size(stacks->b) - hi;
		}
		else
			spacehi = hi;
		if ((size(stacks->b) - lo) < lo)
		{
			if (size(stacks->b) - lo == 0)
				spacehi = 1;
			else
				spacehi = size(stacks->b) - lo;
		}
		else
			spacelo = lo;
		if (spacelo < spacehi && lo != -1)
			stacks->speed = stacks->speed + spacelo;
		else if (spacelo > spacehi && hi != -1)
			stacks->speed = stacks->speed + spacehi;
}

void	operations(t_s *stacks)
{
	int i;

	i = size(stacks->a);
	while (i >= 0) //goes through the whole stack
	{
		printf("    speed bf place: %d\n", stacks->speed);
		place(stacks, i); // finds out fastest way to get num from a to top
		printf("    speed af place: %d\n", stacks->speed);
		hilow(stacks, i);
		printf("    speed af hilo: %d\n", stacks->speed);
		//maxormin(stacks, i); // finds out max or min number clos
		if (stacks->speed < stacks->prevspeed
			&& stacks->speed < stacks->num) //speed of current int
			stacks->num = i;
		printf("prevspeed: %d\n", stacks->prevspeed);
		printf("    speed: %d\n", stacks->speed);
		printf("      num: %d\n", stacks->num);
		printf("next lower number in stack to %s is %s retval: %i\n", stacks->a[i], stacks->b[nextlowernumber(stacks, i)], nextlowernumber(stacks, i));
		printf("next higher number in stack to %s is %s retval: %i\n", stacks->a[i], stacks->b[nexthighernumber(stacks, i)], nexthighernumber(stacks, i));
		stacks->prevspeed = stacks->speed;
		--i;
		stacks->speed = 0;
	}
}

void	sort(t_s *stacks)
{
	if (size(stacks->a) == 1)
	{
		if (ft_atoi(stacks->a[0]) > ft_atoi(stacks->a[1]))
			flags(stacks, S, A);
	}
	else
	{

		flags(stacks, P, B);
		flags(stacks, P, B);
		printf("a[0] = %s b[0] = %s \n",stacks->a[0], stacks->b[0]);
		printf("a[1] = %s b[1] = %s \n",stacks->a[1], stacks->b[1]);
		printf("a[2] = %s b[2] = %s \n",stacks->a[2], stacks->b[2]);
		printf("a[3] = %s b[3] = %s \n",stacks->a[3], stacks->b[3]);
		printf("a[4] = %s b[4] = %s \n",stacks->a[4], stacks->b[4]);
		operations(stacks);
/* 	while (size(stacks->a) != -1)
	{
		//sortit(stacks);
	} */
		//printf("%d", stacks->speed);
		//printf("%d", stacks->num);
		while (size(stacks->b) != -1)
			flags(stacks, P, A);
	}
}

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

