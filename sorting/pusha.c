/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pusha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:53:52 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/15 20:18:46 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotstacka(t_s *stacks)
{
	int	lo;
	int	hi;
	int	valo;
	int	vahi;

	valo = 0;
	vahi = 0;
	lo = nextlowernumbera(stacks, stacks->num);
	hi = nexthighernumbera(stacks, stacks->num);
	if (lo != -1)
		valo = ft_atoi(stacks->a[lo]);
	if (hi != -1)
		vahi = ft_atoi(stacks->a[hi]);
	if (lo != -1)
	{
		if ((size(stacks->a) - lo + 1) > lo)
			while (ft_atoi(stacks->a[size(stacks->a)]) != valo)
				flags(stacks, R, A);
		else
			while (ft_atoi(stacks->a[size(stacks->a)]) != valo)
				flags(stacks, RR, A);
	}
	else
	{
		if ((size(stacks->a) - hi) > hi + 1)
			while (ft_atoi(stacks->a[0]) != vahi)
				flags(stacks, R, A);
		else
			while (ft_atoi(stacks->a[0]) != vahi)
				flags(stacks, RR, A);
	}
}

void	rotstackb(t_s *stacks)
{
	int	top;
	int	bot;
	int	val;

	top = stacks->num;
	bot = (size(stacks->b) - stacks->num + 1);
	val = ft_atoi(stacks->b[stacks->num]);
	if (top < bot)
		while (ft_atoi(stacks->b[0]) != val)
			flags(stacks, R, B);
	else
		while (ft_atoi(stacks->b[0]) != val)
			flags(stacks, RR, B);
}

void	pusha(t_s *stacks)
{
	rotstacka(stacks);
	rotstackb(stacks);
}
