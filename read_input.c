/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:25:25 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/01 15:16:12 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int read_input(int argc, char *argv[],t_s *stacks)
{
	int i;

	i = argc - 2;
	if(ft_error(check_valid(argc, argv) == ERR_INVAL) == ERR_INVAL)
		return(ERR_INVAL);
	stacks->str = join_inpt(argc, argv);
	stacks->a = ft_split(stacks->str, SPACE);
	if(ft_error(check_double(stacks) == ERR_INVAL) == ERR_INVAL)
		return(ERR_INVAL);
	;
	/* if(ft_error(check_double(stacks) == ERR_INVAL) == ERR_INVAL)
		return(ERR_INVAL); */
	while(i >= 0)
		printf("%s \n", stacks->a[i--]);

	return(0);
}

//int in_stack(int argc,char *argv[],t_s *stacks)
/* {
	int i;
	char j;

	i = argc;
	j = *argv[1];
	//stacks->tmp[0] = stacks->res[0];
	//printf("%s \n", stacks->res[0]);
	//printf("%s \n", stacks->tmp[0]);
	return(SUCESS);
} */



/* {
	int i;

	i = argc -1;
	while(i >= 0)
	{
		stacks->a = argv[i];
		printf("%s \n", stacks->a);
		--i;
	}
	return (SUCESS);
} */
