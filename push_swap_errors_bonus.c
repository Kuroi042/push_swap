/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_errors_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:49:19 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/29 21:53:33 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	args_parser(char **argv, t_mytools *mytools, t_mystack *mystack)
{
	int		i;
	int		j;
	char	*space;

	i = 0;
	j = 0;
	mytools->join = ft_strdup(" ");
	space = ft_strdup(" ");
	while (argv[i] != '\0')
	{
		if (space_error(argv[i]))
		{
			error_normal_bonus(mystack, mytools);
		}
		sign_error(argv[i], mystack, mytools);
		mytools->join = ft_strjoin(mytools->join, space);
		mytools->join = ft_strjoin(mytools->join, argv[i]);
		i++;
	}
	free(space);
	mytools->str = ft_split(mytools->join, ' ');
	free(mytools->join);
	counter(mytools);
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
			error_normal_bonus(mystack, mytools);
		}
		i++;
	}
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

void	is_sorted_bonus(t_mystack *mystack, t_mytools *mytools)
{
	int	i;

	i = 0;
	while (i < mystack->len - 1)
	{
		if (mystack->stack_a[i] > mystack->stack_a[i + 1])
		{
			mystack->is_sorted = 0;
			break ;
		}
		i++;
	}
	if (i == mystack->len - 1)
	{
		mystack->is_sorted = 1;
	}
}

void	check_dip_bonus(t_mystack *mystack, t_mytools *mytools)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i != mystack->len)
	{
		j = i + 1;
		while (j != mystack->len)
		{
			if (mystack->stack_a[i] == mystack->stack_a[j])
			{
				error_medium_bonus(mystack, mytools);
			}
			else
				j++;
		}
		i++;
	}
}
