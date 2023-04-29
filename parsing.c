/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:55:18 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/28 23:40:22 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	counter(t_mytools *mytools)
{
	while (mytools->str[mytools->len])
		mytools->len++;
}

void	args_parser(char **argv, t_mytools *mytools, t_mystack *mystack)
{
	int		i;
	int		j;
	char	*lol;

	i = 0;
	j = 0;
	mytools->join = ft_strdup(" ");
	lol = ft_strdup(" ");
	while (argv[i])
	{
		if (space_error(argv[i]))
		{
			error_normal(mystack, mytools);
		}
		sign_error(argv[i], mystack, mytools);
		mytools->join = ft_strjoin(mytools->join, lol);
		mytools->join = ft_strjoin(mytools->join, argv[i]);
		i++;
	}
	free(lol);
	mytools->str = ft_split(mytools->join, ' ');
	free(mytools->join);
	counter(mytools);
}

int	space_error(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

void	sign_error(char *str, t_mystack *mystack, t_mytools *mytools)
{
	char	c;
	int		i;
	char	s;

	c = '\0';
	s = ' ';
	i = 0;
	while (str[i])
	{
		if ((str[i] == '+' || str[i] == '-') && ((str[i + 1] == c) || (str[i
						+ 1] == s)))
		{
			error_normal(mystack, mytools);
		}
		i++;
	}
}
