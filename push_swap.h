/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:29:25 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/05 19:03:05 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  ██╗  ██╗███████╗ █████╗ ██████╗ ███████╗██████╗
//  ██║  ██║██╔════╝██╔══██╗██╔══██╗██╔════╝██╔══██╗
//  ███████║█████╗  ███████║██║  ██║█████╗  ██████╔╝
//  ██╔══██║██╔══╝  ██╔══██║██║  ██║██╔══╝  ██╔══██╗
//  ██║  ██║███████╗██║  ██║██████╔╝███████╗██║  ██║
//  ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚═════╝ ╚══════╝╚═╝  ╚═╝

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
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
	char	**a;
	char	**b;
	char	**tmp;
	char	**res;
	char	*str;
}	t_s;

// =============================================================================
//
// =============================================================================
// Checks wether all the ints are correct and ints at all
int		valid(char *argv[]);
//checks wether there are doubles
int		check_double(t_s *stacks);
// Gets the stack from the initial read
int		in_stack(int argc, char *argv[], t_s *stacks);
//read inoput
int		read_input(int argc, char *argv[], t_s *stacks);
// main
int		main(int argc, char *argv[]);
// applies is_digit
int		check_digit(int argc, char *argv[]);
// checks if its a digit
int		is_digit(char check);
//checks if its valid
int		check_valid(int argc, char *argv[]);
// Joins all the strings that are input
char	*join_inpt(int argc, char *argv[]);
// checks for all space or the case if empty
int		space_check(int argc, char *argv[]);
// error msg
int		ft_error(int i);
// negative or positive number with sign
int		negpos_check(int argc, char *argv[]);
// is number
int		is_num(char check);
// checks size of stack
int		size(char **count);
// sa
void	sa(t_s *stacks);
// sb
void	sb(t_s *stacks);
// ss

#endif
