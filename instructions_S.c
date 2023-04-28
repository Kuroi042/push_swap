/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_S.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:55:38 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/28 00:21:14 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_mystack *mystack)
{
	int	i;
	int	temp;

	i = 0;
	if (mystack->len_a == 0 || mystack->len_a == 1)
	{
	}
	else if (mystack->len_a > 1)
	{
		temp = 0;
		temp = mystack->stack_a[0];
		mystack->stack_a[0] = mystack->stack_a[1];
		mystack->stack_a[1] = temp;
		printf("sa\n");
	}
}

void	swap_b(t_mystack *mystack)
{
	int	i;
	int	temp;

	i = 0;
	if (mystack->len_b == 0 || mystack->len_b == 1)
	{
	}
	else if (mystack->len_b > 1)
	{
		temp = 0;
		temp = mystack->stack_b[0];
		mystack->stack_b[0] = mystack->stack_b[1];
		mystack->stack_b[1] = temp;
		printf("sa\n");
	}
}

void	swap_ab(t_mystack *mystack)
{
	swap_a(mystack);
	swap_b(mystack);
	printf("ss\n");
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
		printf("pa\n");
	}
}

void	push_b(t_mystack *mystack)
{
	int	i;

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
		printf("pb\n");
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
		printf("ra\n");
	}
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
		printf("rb\n");
	}
}

void	rotate_ab(t_mystack *mystack)
{
	rotate_a(mystack);
	rotate_b(mystack);
	printf("rab\n");
}

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
	printf("rra\n");
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
	printf("rrb\n");
}
