/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:53 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/28 23:39:49 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_push(char *str, t_mytools *mytools, t_mystack *mystack)

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
	nbr = calculate_number(str + i, sign, mytools, mystack);
	return (nbr);
}

long	calculate_number(char *str, int sign, t_mytools *mytools,
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
				error_medium(mystack, mytools);
		}
		else
		{
			error_medium(mystack, mytools);
		}
		i++;
	}
	return (nbr * sign);
}
