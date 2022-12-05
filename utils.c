/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:10:33 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/05 19:56:34 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_num(char check)
{
	if (check == '0' || check == '1' || check == '2'
		|| check == '3' || check == '4' || check == '5'
		|| check == '6' || check == '7' || check == '8'
		|| check == '9')
		return (SUCESS);
	else
		return (ERR_INVAL);
}

char	*join(char const *s1, char const *s2)
{
	char	*tmp;
	char	*res;

	tmp = ft_strjoin(s1, " ");
	res = ft_strjoin(tmp, s2);
	return (res);
}

int	size(char **count)
{
	int	i;

	i = 0;
	while (count[i + 1] != NULL)
		++i;
	return (i);
}

int	ft_error(int i)
{
	if (i == 1)
	{
		printf("ERROR \n");
		return (ERR_INVAL);
	}
	else
		return (SUCESS);
}

char	*join_inpt(int argc, char *argv[])
{
	char	*str;
	int		i;
	int		c;

	c = argc;
	str = "";
	i = 1;
	while (argv[i])
	{
		str = ft_strjoin(str, argv[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}
