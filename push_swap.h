/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:29:25 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/28 15:32:59 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP.H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// =============================================================================
//								  ctype
// =============================================================================
// Checks wether all the ints are correct and ints at all
int	valid(char *str);
// Gets the stack from the initial read
int get_stack(int argc,int argv,t_s *stacks);

#endif
