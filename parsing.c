/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:55:18 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/26 23:39:34 by mbouderr         ###   ########.fr       */
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
	char	*join;

	i = 0;
	j = 0;
	join = ft_strdup(" ");
	while (argv[i])
	{
		if (space_error(argv[i]))
		error_normal(mystack ,  mytools );
		 sign_error(argv[i], mystack , mytools);
		join = ft_strjoinpush(join, " ");
		join = ft_strjoinpush(join, argv[i]);
		i++;
	}
	mytools->str = ft_split(join, ' ');
	free(join);
	counter(mytools);
}
