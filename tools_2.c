/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:12:27 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/30 17:19:45 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate_a(t_mystack *mystack)
{
	int	i;
	int	rotate;

	i = mystack->len_a;
	rotate = mystack->stack_a[mystack->len_a - 1];
	while (i > 0)
	{
		mystack->stack_a[i] = mystack->stack_a[i - 1];
		i--;
	}
	mystack->stack_a[0] = rotate;
	ft_printf("rra\n");
}

void	r_rotate_b(t_mystack *mystack)
{
	int	i;
	int	rotate;

	i = mystack->len_b;
	rotate = mystack->stack_b[mystack->len_b - 1];
	while (i > 0)
	{
		mystack->stack_b[i] = mystack->stack_b[i - 1];
		i--;
	}
	mystack->stack_b[0] = rotate;
	ft_printf("rrb\n");
}

void	rotate_b(t_mystack *mystack)
{
	int	i;
	int	bzerow;

	if (mystack->stack_b)
	{
		i = 0;
		bzerow = mystack->stack_b[0];
		while (i < mystack->len_b)
		{
			mystack->stack_b[i] = mystack->stack_b[i + 1];
			i++;
		}
		mystack->stack_b[mystack->len_b - 1] = bzerow;
		ft_printf("rb\n");
	}
}

void	rotate_ab(t_mystack *mystack)
{
		if (mystack->len_b == 0 || mystack->len_a == 0)
		return;
	rotate_a(mystack);
	rotate_b(mystack);
	ft_printf("rr\n");
}

int	smal_index(t_mystack *mystack)
{
	int	smal_num;
	int	i;
	int	j;

	j = 0;
	i = 0;
	smal_num = mystack->stack_a[0];
	while (i < mystack->len_a)
	{
		if (mystack->stack_a[i] < smal_num)
		{
			j = i;
			smal_num = mystack->stack_a[i];
		}
		i++;
	}
	return (j);
}
