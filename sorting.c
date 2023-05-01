/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:50 by mbouderr          #+#    #+#             */
/*   Updated: 2023/05/01 19:17:19 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_mystack *mystack, t_mytools *mytools)
{
	if (mystack->stack_a[0] > mystack->stack_a[1])
		swap_a(mystack);
	vree_stack(mystack, mytools);
}

void	sort_three_one(t_mystack *mystack)
{
	if (mystack->stack_a[0] > mystack->stack_a[1]
		&& mystack->stack_a[0] < mystack->stack_a[2]
		&& mystack->stack_a[1] < mystack->stack_a[2])
		swap_a(mystack);
	else if (mystack->stack_a[0] > mystack->stack_a[1]
		&& mystack->stack_a[0] > mystack->stack_a[2]
		&& mystack->stack_a[1] > mystack->stack_a[2])
	{
		swap_a(mystack);
		r_rotate_a(mystack);
	}
	sort_three_two(mystack);
}

void	sort_three_two(t_mystack *mystack)
{
	if (mystack->stack_a[0] > mystack->stack_a[1]
		&& mystack->stack_a[0] > mystack->stack_a[2]
		&& mystack->stack_a[1] < mystack->stack_a[2])
		rotate_a(mystack);
	else if (mystack->stack_a[0] < mystack->stack_a[1]
		&& mystack->stack_a[0] < mystack->stack_a[2]
		&& mystack->stack_a[1] > mystack->stack_a[2])
	{
		swap_a(mystack);
		rotate_a(mystack);
	}
	else if (mystack->stack_a[0] < mystack->stack_a[1]
		&& mystack->stack_a[0] > mystack->stack_a[2]
		&& mystack->stack_a[1] > mystack->stack_a[2])
		r_rotate_a(mystack);
}

void	sort_four(t_mystack *mystack, t_mytools *mytools)
{
	int	i;

	i = 0;
	while (mystack->len_a > 3)
	{
		if (smal_index(mystack) == 0)
		{
			push_b(mystack);
		}
		if (smal_index(mystack) <= mystack->len_a / 2)
			rotate_a(mystack);
		else if (smal_index(mystack) >= mystack->len_a / 2)
		{
			r_rotate_a(mystack);
			i++;
		}
	}
	sort_three_one(mystack);
	push_a(mystack);
	vree_stack(mystack, mytools);
}

void	sort_cinq(t_mystack *mystack)
{
	int	i;

	i = 0;
	while (mystack->len_a > 3)
	{
		if (smal_index(mystack) == 0)
			push_b(mystack);
		if (smal_index(mystack) <= (mystack->len_a / 2))
			rotate_a(mystack);
		else if ((smal_index(mystack) >= mystack->len_a / 2))
			r_rotate_a(mystack);
		i++;
	}
	sort_three_one(mystack);
	push_a(mystack);
	push_a(mystack);
}
