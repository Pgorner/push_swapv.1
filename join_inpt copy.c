/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_inptcopy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:24:11 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/30 14:53:33 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		size++;
	(new = malloc(sizeof(char) * (size + 1)));
	if (!new)
	{
		return (0);
	}
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	str = (char *)malloc(sizeof(*s1) * (strlen(s1) + strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}


int main(int argc, char * argv[])
{
	char *str;
	int i;

	str = "";
	i = 1;
	if(argc > 2)
	{
		while(i < argc)
		{
			str = ft_strjoin(str, argv[i]);
			++i;
			printf("str = %s \n", str);
		}
	}
	return(0);
}
