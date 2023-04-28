/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_errors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:55:08 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/28 16:17:17 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dip(t_mystack *mystack, t_mytools *mytools)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (mystack->stack_a[i])
	{
		j = i + 1;
		while (mystack->stack_a[j])
		{
			if (mystack->stack_a[i] == mystack->stack_a[j])
			{
				error_medium(mystack, mytools);
			}
			else
				j++;
		}
		i++;
	}
}

void	is_sorted(t_mystack *mystack, t_mytools *mytools)
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
		simple_free(mystack, mytools);
	}
}

void	simplesorting(t_mystack *mystack, int *arr)
{
	int	i;
	int	j;
	int	temp;

	temp = 0;
	i = 0;
	while (i < mystack->len - 1)
	{
		j = 0;
		while (j < mystack->len - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	swap_ab(t_mystack *mystack)
{
	swap_a(mystack);
	swap_b(mystack);
	printf("ss\n");
}
