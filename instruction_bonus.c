/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 22:17:25 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/30 17:23:57 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_a(t_mystack *mystack)
{
	int	i;
	int	temp;

	i = 0;
	if (mystack->len_a == 0)
		return ;
	else if (mystack->len_a > 1)
	{
		temp = 0;
		temp = mystack->stack_a[0];
		mystack->stack_a[0] = mystack->stack_a[1];
		mystack->stack_a[1] = temp;
	}
}

void	swap_b(t_mystack *mystack)
{
	int	i;
	int	temp;

	i = 0;
	if (mystack->len_b == 0 || mystack->len_b == 1)
		return ;
	else if (mystack->len_b > 1)
	{
		temp = 0;
		temp = mystack->stack_b[0];
		mystack->stack_b[0] = mystack->stack_b[1];
		mystack->stack_b[1] = temp;
	}
}

void	push_a(t_mystack *mystack)
{
	int	i;

	if (mystack->len_b == 0)
		return ;
	if (mystack->stack_b)
	{
		mystack->len_a++;
		i = mystack->len_a;
		while (i > 0)
		{
			mystack->stack_a[i] = mystack->stack_a[i - 1];
			i--;
		}
		mystack->stack_a[0] = mystack->stack_b[0];
		mystack->len_b--;
		while (i < mystack->len_b)
		{
			mystack->stack_b[i] = mystack->stack_b[i + 1];
			i++;
		}
	}
}

void	push_b(t_mystack *mystack)
{
	int	i;

	if (mystack->len_a == 0)
		return ;
	if (mystack->stack_a)
	{
		mystack->len_b++;
		i = mystack->len_b;
		while (i > 0)
		{
			mystack->stack_b[i] = mystack->stack_b[i - 1];
			i--;
		}
		mystack->stack_b[0] = mystack->stack_a[0];
		mystack->len_a--;
		while (i < mystack->len_a)
		{
			mystack->stack_a[i] = mystack->stack_a[i + 1];
			i++;
		}
	}
}

void	rotate_a(t_mystack *mystack)
{
	int	i;
	int	azero;

	if (mystack->len_a == 1 || mystack->len_a == 0)
		return ;
	else if (mystack->stack_a)
	{
		i = 0;
		azero = mystack->stack_a[0];
		while (i < mystack->len_a)
		{
			mystack->stack_a[i] = mystack->stack_a[i + 1];
			i++;
		}
		mystack->stack_a[mystack->len_a - 1] = azero;
	}
}
