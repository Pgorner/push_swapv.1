/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:24:19 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/15 20:29:46 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_s	stacks;

	stacks.operations = 0;
	read_input(argc, argv, &stacks);
	if (sorted(&stacks) == NO)
	{
		if (size(stacks.a) > 2)
			sort(&stacks);
		if (size(stacks.a) == 2)
			sort_small(&stacks);
		if (size(stacks.a) == 1)
			sort_two(&stacks);
	}
	while (size(stacks.b) != -1)
		flags(&stacks, P, A);
	rotatea(&stacks);
	return (0);
}
	//printf("\n %i \n", stacks.operations);
