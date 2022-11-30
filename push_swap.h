/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:29:25 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/30 13:17:20 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# define A 0
# define B 1
# define SUCESS 0
# define ERR_INVAL 1
# define SPACE ' '

typedef struct stacks
{
	int *a;
	int *b;
	int *tmp;
} t_s;

// =============================================================================
//
// =============================================================================
// Checks wether all the ints are correct and ints at all
int	valid(char *argv[]);
// Gets the stack from the initial read
int get_stack(int argc,char *argv[],t_s *stacks);
// Push
int push(t_s *stacks, int flag);
// main
int main(int argc, char *argv[]);
// determines the stack size
int s_size (int *a);
// checks if its a digit
int is_digit(char check);
//checks if its valid
int check_valid(int argc, char *argv[]);

#endif
