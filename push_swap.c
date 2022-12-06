/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:24:19 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/06 20:02:03 by pgorner          ###   ########.fr       */
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
	t_s	stacks;

	i = 0;
	j = 0;
	read_input(argc, argv, &stacks);
	if (sorted(&stacks) == NO)
		sort(&stacks);
	flags(&stacks, S, S);
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

