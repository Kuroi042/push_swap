/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_bonus2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 22:07:15 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/30 17:23:31 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	r_rotate_a(t_mystack *mystack)
{
	int	i;
	int	rotate;

	if (mystack->len_a == 0)
		return ;
	i = mystack->len_a;
	rotate = mystack->stack_a[mystack->len_a - 1];
	while (i > 0)
	{
		mystack->stack_a[i] = mystack->stack_a[i - 1];
		i--;
	}
	mystack->stack_a[0] = rotate;
}

void	r_rotate_b(t_mystack *mystack)
{
	int	i;
	int	rotate;

	if (mystack->len_b == 0)
		return ;
	i = mystack->len_b;
	rotate = mystack->stack_b[mystack->len_b - 1];
	while (i > 0)
	{
		mystack->stack_b[i] = mystack->stack_b[i - 1];
		i--;
	}
	mystack->stack_b[0] = rotate;
}

void	rotate_b(t_mystack *mystack)
{
	int	i;
	int	bzerow;

	if (mystack->len_b == 0)
		return ;
	else if (mystack->stack_b)
	{
		i = 0;
		bzerow = mystack->stack_b[0];
		while (i < mystack->len_b)
		{
			mystack->stack_b[i] = mystack->stack_b[i + 1];
			i++;
		}
		mystack->stack_b[mystack->len_b - 1] = bzerow;
	}
}

void	rotate_ab(t_mystack *mystack)
{
	if (mystack->len_a == 0 && mystack->len_b == 0)
		return ;
	else
	{
		rotate_a(mystack);
		rotate_b(mystack);
	}
}

void	swap_ab(t_mystack *mystack)
{
	if (mystack->len_a == 1 || mystack->len_a == 0)
		return ;
	else if (mystack->len_b == 0 || mystack->len_b == 1)
		return ;
	else
	{
		swap_a(mystack);
		swap_b(mystack);
	}
}
