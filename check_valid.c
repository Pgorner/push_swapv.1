/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:16:27 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/30 14:58:41 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_digit(char check)
{
	if(check == '0' || check == '1' ||check == '2' ||check == '3' ||check == '4'
	|| check == '5' || check == '6' ||check == '7' ||check == '8' ||check == '9')
		return(0);
	else
		return(error(1), 1);
}

int check_valid(int argc, char *argv[])
{
	int i;
	int j;
	int s;

	j = 1;
	while(j < argc)
	{
		s = (ft_strlen(&argv[j][i]) - 1);
		i = 0;
		while(i <= s)
		{
			is_digit(argv[j][i]);
			++i;
		}
		i = 0;
		++j;
	}
	return(0);
}

