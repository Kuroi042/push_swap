/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:51:12 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/29 21:53:38 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_atoi_push_bonus(char *str, t_mytools *mytools, t_mystack *mystack)
{
	size_t	i;
	int		sign;
	long	nbr;

	nbr = 0;
	sign = 1;
	i = 0;
	while (*str == ' ')
		str++;
	if (str[i] == '-' && str[i + 1] != ' ')
	{
		i++;
		sign = sign * -1;
	}
	else if (str[i] == '+' && str[i + 1] != ' ')
		i++;
	nbr = calculate_number_bonus(str + i, sign, mytools, mystack);
	return (nbr);
}

long	calculate_number_bonus(char *str, int sign, t_mytools *mytools,
		t_mystack *mystack)
{
	size_t	i;
	long	nbr;
	int		digit;

	nbr = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';
			nbr = nbr * 10 + digit;
			if ((sign * nbr) > INT_MAX || (sign * nbr) < INT_MIN)
				error_medium_bonus(mystack, mytools);
		}
		else
		{
			error_medium_bonus(mystack, mytools);
		}
		i++;
	}
	return (nbr * sign);
}

void	counter(t_mytools *mytools)
{
	while (mytools->str[mytools->len])
		mytools->len++;
}
