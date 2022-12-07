/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:48:31 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/07 18:40:09 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sorted(t_s *stacks)
{
	int	i;

	i = size(stacks->a);
	while (i > 0 && (ft_atoi(stacks->a[i]) > ft_atoi(stacks->a[i - 1])))
		--i;
	if (i != 0)
		return (NO);
	else
		return (YES);
}
/* 	while (i > 0 && (ft_atoi(stacks->a[i]) > ft_atoi(stacks->a[i - 1]))) */
/* 	if (ft_atoi(stacks->a[i]) < ft_atoi(stacks->a[i - 1])) */
