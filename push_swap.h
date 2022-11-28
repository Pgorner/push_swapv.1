/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:29:25 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/28 16:36:25 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include "libft/libft.h"
# define A 0
# define B 1
# define SUCESS 0
# define ERR_INVAL 1
# define SPACE ' '

// =============================================================================
//
// =============================================================================
// Checks wether all the ints are correct and ints at all
int	valid(char *str);
// Gets the stack from the initial read
int get_stack(int argc,int argv,t_s *stacks);
// Push
void push(struct t_s, int flag);
// main
int main(int argc, const char *argv[]);
// determines the stack size
int s_size (int *a);

#endif
