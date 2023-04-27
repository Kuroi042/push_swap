/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:55:18 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/27 22:30:14 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	counter(t_mytools *mytools)
{
	while (mytools->str[mytools->len])
		mytools->len++;
}

void	args_parser(char **argv, t_mytools *mytools ,t_mystack *mystack )
{
	int		i;
	int		j;
	// char	*join;
	char *lol;
	i = 0;
	j = 0;
	mytools->join = ft_strdup(" ");
	lol = ft_strdup(" ");
	while (argv[i])
	{
		if (space_error(argv[i])){
			
		error_normal(mystack ,  mytools);
		}
		 sign_error(argv[i], mystack , mytools);
		mytools->join = ft_strjoinpush(mytools->join, lol);
		mytools->join = ft_strjoinpush(mytools->join, argv[i]);
		i++;
	}
	free(lol);
	mytools->str = ft_split(mytools->join, ' ');
	free(mytools->join);
	counter(mytools);
}
