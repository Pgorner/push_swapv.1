/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:53:52 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/15 20:17:09 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotatestackb(t_s *stacks)
{
	int	lo;
	int	hi;
	int	s;
	int	valo;
	int	vahi;

	valo = 0;
	vahi = 0;
	lo = nextlowernumberb(stacks, stacks->num);
	hi = nexthighernumberb(stacks, stacks->num);
	s = size(stacks->b);
	if (lo != -1)
		valo = ft_atoi(stacks->b[lo]);
	if (hi != -1)
		vahi = ft_atoi(stacks->b[hi]);
	if (lo != -1)
	{
		if ((size(stacks->b) - lo + 1) > lo)
			while (ft_atoi(stacks->b[0]) != valo)
				flags(stacks, R, B);
		else
			while (ft_atoi(stacks->b[0]) != valo)
				flags(stacks, RR, B);
	}
	else
	{
		if ((size(stacks->b) - hi) > hi + 1)
			while (ft_atoi(stacks->b[s]) != vahi)
				flags(stacks, R, B);
		else
			while (ft_atoi(stacks->b[s]) != vahi)
				flags(stacks, RR, B);
	}
}

void	rotatestacka(t_s *stacks)
{
	int	top;
	int	bot;
	int	val;

	top = stacks->num;
	bot = (size(stacks->a) - stacks->num + 1);
	val = ft_atoi(stacks->a[stacks->num]);
	if (top < bot)
		while (ft_atoi(stacks->a[0]) != val)
			flags(stacks, R, A);
	else
		while (ft_atoi(stacks->a[0]) != val)
			flags(stacks, RR, A);
}

void	pushb(t_s *stacks)
{
	rotatestackb(stacks);
	rotatestacka(stacks);
}
