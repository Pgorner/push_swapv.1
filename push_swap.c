/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:24:19 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/11 17:56:16 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test(char **count)
{
	int	i;

	i = 0;
	while (count[i + 1] != NULL)
		++i;
	if (count[0] != NULL && count[1] == NULL)
		return (1);
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int k;
	t_s	stacks;


	read_input(argc, argv, &stacks);

	j = 0;
	i = test(stacks.a);
	while (j <= i)
	{
		//printf("stack a: %s\n", stacks.a[j]);
		++j;
	}
/* 		flags(&stacks, P, B);
		flags(&stacks, P, B); */
	if (sorted(&stacks) == NO)
	{
		//printf("not sorted so:\nsorting: ......\n");
		sort(&stacks);
	}
	//printf("\nsorting done\n");
	j = 1;
	k = ft_atoi(stacks.b[0]);
	while (j <= size(stacks.b))
	{
		if (k < ft_atoi(stacks.b[j]))
			k = ft_atoi(stacks.b[j]);
		j++;
	}
	while (ft_atoi(stacks.b[0]) != k)
		flags(&stacks, R, B);

	while (size(stacks.b) != -1)
		flags(&stacks, P, A);
	j = 0;

	i = size(stacks.a);
	while (j <= i)
	{
		//printf("stack a 2nd time: %s\n", stacks.a[j]);
		++j;
	}
	//printf("done");
	return (0);
}
/* 	j = 0;
	i = test(stacks.a);
	while (j <= i)
	{
		printf("\n stack a 2nd time: %s", stacks.a[j]);
		++j;
	}
	printf("\n");
	j = 0;
	i = test(stacks.b);
	while (j < i)
	{
		printf("\n stack b 2nd time: %s", stacks.b[j]);
		++j;
	} */
