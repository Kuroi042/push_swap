/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_S.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:55:38 by mbouderr          #+#    #+#             */
/*   Updated: 2023/05/01 19:03:08 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_mystack *mystack)
{
	int	temp;

	if (mystack->len_a == 0 || mystack->len_a == 1)
	{
	}
	else
	{
		temp = 0;
		temp = mystack->stack_a[0];
		mystack->stack_a[0] = mystack->stack_a[1];
		mystack->stack_a[1] = temp;
		ft_printf("sa\n");
	}
}

void	swap_b(t_mystack *mystack)
{
	int	i;
	int	temp;

	i = 0;
	if (mystack->len_b == 0)
		return ;
	else if (mystack->len_b > 1)
	{
		temp = 0;
		temp = mystack->stack_b[0];
		mystack->stack_b[0] = mystack->stack_b[1];
		mystack->stack_b[1] = temp;
		ft_printf("sb\n");
	}
}

//push to_STACK _A
void	push_a(t_mystack *mystack)
{
	int	i;

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
		ft_printf("pa\n");
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
		ft_printf("pb\n");
	}
}

void	rotate_a(t_mystack *mystack)
{
	int	i;
	int	azero;

	if (mystack->stack_a)
	{
		i = 0;
		azero = mystack->stack_a[0];
		while (i < mystack->len_a)
		{
			mystack->stack_a[i] = mystack->stack_a[i + 1];
			i++;
		}
		mystack->stack_a[mystack->len_a - 1] = azero;
		ft_printf("ra\n");
	}
}
