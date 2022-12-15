/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:54:05 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/15 19:23:21 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_s *stacks)
{
	flags(stacks, S, A);
}

void	sort(t_s *stacks)
{
	if (size(stacks->a) > 4)
	{
		flags(stacks, P, B);
		flags(stacks, P, B);
	}
	else
		flags(stacks, P, B);
	while (size(stacks->a) != -1)
	{
		operationsa(stacks);
/* 		printf("stacks->num%i\n", stacks->num);
		printf("NUMBER%s\n", stacks->a[stacks->num]);
		printf("nexthigher%s\n", stacks->b[nexthighernumberb(stacks, stacks->num)]); */
		pushb(stacks);
		flags(stacks, P, B);
	}
}

void	sort_back(t_s *stacks)
{
	while (size(stacks->b) != -1)
	{
		operationsb(stacks);
		pusha(stacks);
		flags(stacks, P, A);
	}
}
