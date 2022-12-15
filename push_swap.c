/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:24:19 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/15 19:29:08 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printit(t_s *stacks)
{
	int i;

	i = 0;
	while (i < 10) //(size(stacks->a)  + size(stacks->b) + 2))
	{
		printf("stack a: %s stack b: %s\n", stacks->a[i],stacks->b[i]);
		++i;
	}
}

int	main(int argc, char *argv[])
{
	t_s	stacks;

	stacks.operations = 0;
	read_input(argc, argv, &stacks);
	if (sorted(&stacks) == NO)
	{
		if (size(stacks.a) > 2)
			sort(&stacks);
		//printit(&stacks);
		if (size(stacks.a) == 2)
			sort_small(&stacks);
		if (size(stacks.a) == 1)
			sort_two(&stacks);
/* 		if (size(stacks.b) != -1)
		{
			rotateb(&stacks);
			sort_back(&stacks);
		} */
		//printit(&stacks);
	}
	while (size(stacks.b) != -1)
		flags(&stacks, P, A);
	rotatea(&stacks);
	//printit(&stacks);
	//printf("\n %i \n", stacks.operations);
	return (0);
}







/* 	j = 0;
	i = size(stacks.a);
	k = 0;
	while (j <= i + 1)
	{
		printf("stack a: %s stack b: %s\n", stacks.a[j],stacks.b[j]);
		++j;
	} */
