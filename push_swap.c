/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:24:19 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/05 19:56:23 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	t_s		stacks;

	i = 0;
	j = 0;
	read_input(argc, argv, &stacks);
	i = size(stacks.a);
/* 	while (j <= i)
	{
		printf("\ninstance 1: %s", stacks.a[j]);
		++j;
	}
	sa(&stacks);
	j = 0;
	i = size(stacks.a);
	while (j <= i)
	{
		printf("\nj = %i instance 2: %s", j, stacks.a[j]);
		++j;
	}
	return(0); */
}
