/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:27:32 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/30 15:01:27 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int get_stack(int argc,char *argv[],t_s *stacks)
{
/* 	char	*str;
	char	*inp; */
	int		i;
	if(stacks->a == 0)
		return(0);
	i = 0;
	if(valid(argv) == ERR_INVAL)
		return(ERR_INVAL);
	if(argc == 2)
		return(1);

		/*inp = ft_itoa(argv);
		printf("%s", inp);
		str = *ft_split(argv, SPACE);
		printf("%s", str);
		if(!argv || valid(str) == ERR_INVAL)
			return(ERR_INVAL); */
	return (0);
}
