/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:47 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/27 22:29:07 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_100(t_mystack *mystack)
{
	int	*s;
	int	i;
	int	j;

	i = 0;
	mystack->temparr = ft_calloc(sizeof(int), mystack->len);
	ft_memcpy(mystack->temparr, mystack->stack_a, sizeof(int) * mystack->len);
	simplesorting(mystack, mystack->temparr);
	s = finder(mystack);
 	range(mystack, s);	
 	free(s);
	return_b(mystack);
				// while(1){}
	
}

int	*finder(t_mystack *mystack)
{
	int	t;


	int i = 0; // stack_a
	int j = 0; // temp_stack
	t = 0;
	mystack->index = malloc(sizeof(int) * mystack->len);
	while (i < mystack->len)
	{
		j = 0;
		while (j < mystack->len)
		{
			if (mystack->stack_a[i] == mystack->temparr[j])
			{
				mystack->index[t] = j;
				t++;
				j = mystack->len;
			}
			j++;
		}
		i++;
	}
		
	return (mystack->index);
	
}

void	range(t_mystack *mystack, int *s)
{
	int	range;
	int	i;

	range = 15;
	i = 0;
	if (mystack->len_a > 100)
		range = 35;
	while (mystack->len_a)
	{
		s = finder(mystack);
		if (s[0] < i)
		{
			push_b(mystack);
			rotate_b(mystack);
			i++;
		}
		else if (s[0] >= i && s[0] < range + i)
		{
			push_b(mystack);
			i++;
		}
		else
			rotate_a(mystack);
	free(mystack->index);
	}
}

int	big_index(t_mystack *mystack)
{
	int	biggest_num;
	int	i;
	int	j;

	j = 0;
	i = 0;
	biggest_num = mystack->stack_b[0];
	while (i < mystack->len_b)
	{
		if (mystack->stack_b[i] > biggest_num)
		{
			j = i;
			biggest_num = mystack->stack_b[i];
		}
		i++;
	}
	return (j);
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

void	return_b(t_mystack *mystack)
{
	int i = 0;
	while (mystack->len_b)
	{
		if (big_index(mystack) == 0)
			push_a(mystack);
		else if (big_index(mystack) <= (mystack->len_b / 2))
			rotate_b(mystack);
		else if (big_index(mystack) >= (mystack->len_b / 2))
			r_rotate_b(mystack);
	}
}