/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:10:33 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/30 20:54:35 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_error(int i)
{
	if(i == 1)
	{
		printf("ERROR \n");
		return (ERR_INVAL);
	}
	else
		return(SUCESS);
}

char *join_inpt(int argc, char *argv[])
{
	char *str;
	int i;
	int c;

	c = argc;
	str = "";
	i = 1;
	while(argv[i])
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, argv[i]);
		i++;
	}
	return(str);
}
