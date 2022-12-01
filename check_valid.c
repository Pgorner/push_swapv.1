/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:16:27 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/01 16:12:31 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int size(t_s *stacks)
{
	int i;

	i = 0;
	while(stacks->a[i+1] != NULL)
		++i;
	return(i);
}

int check_double(t_s *stacks)
{
	int i;
	int j;

	i = 1;
	j = 2;
	while(i < size(stacks))
	{
		while(stacks->a[j] != NULL)
		{
			if(stacks->a[i] == stacks->a[j])
				return(ERR_INVAL);
			++j;
		}
		++i;
		j = i;
	}
	return(SUCESS);
}

int is_digit(char check)
{
	if(check == '0' || check == '1' || check == '2' || check == '3' || check == '4'|| check == '5'
	|| check == '6' || check == '7' || check == '8' || check == '9' || check == ' ' || check == '-' || check == '+' )
		return(SUCESS);
	else
		return(ERR_INVAL);
}

int check_digit(int argc, char *argv[])
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
			if(is_digit(argv[j][i]) == ERR_INVAL)
				return(ERR_INVAL);
			++i;
		}
		i = 0;
		++j;
	}
	return(SUCESS);
}

int space_check(int argc, char *argv[])
{
	int i;
	int j;
	int s;

	j = 1;
	while(j < argc)
	{
		s = (ft_strlen(&argv[j][i]) - 1);
		i = 0;
		while(i <= s &&	argv[j][i] == SPACE )
		{
			if((argv[j][i+1]) == '\0')
				return(ERR_INVAL);
			++i;
		}
		i = 0;
		++j;
	}
	return(SUCESS);
}

int negpos_check(int argc, char *argv[])
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
			if(((argv[j][i]) == '-') && ((is_digit(argv[j][i+1]) == ERR_INVAL)
				|| (is_digit(argv[j][i-1]) == SUCESS)))
				return(ERR_INVAL);
			else
			{
				++i;
			}
		}
		i = 0;
		++j;
	}
	return(SUCESS);
}

int check_valid(int argc, char *argv[])
{
	//printf("%d", negative_check(argc, argv));
	if(check_digit(argc, argv) == ERR_INVAL
		|| space_check(argc, argv) == ERR_INVAL
		|| negpos_check(argc, argv) == ERR_INVAL)
		return(ERR_INVAL);
	else
		return(SUCESS);
}
