/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:10:33 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/27 16:02:49 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int valid(char *str)
{
	while(!str[i] && INT_MIN < str[i] < INT_MAX)
		++str;
	if(!str[i])
		return(SUCESS);
	else
		return(ERR_INVAL);
}

int get_stack(int argc,int argv,t_s *stacks)
{
	char	*str;

	str = ft_split(argv, SPACE);
	printf("%s", str);
	if(!argv || valid(str) == ERR_INVAL)
		return(ERR_INVAL);
}
