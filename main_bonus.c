/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:59:15 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/30 18:39:08 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include <string.h>

int	main(int argc, char *argv[])
{
	int			i;
	t_mytools	*mytools;
	t_mystack	*mystack;

	if (argc > 1)
	{
		i = 0;
		argv++;
		mytools = (t_mytools *)malloc(sizeof(t_mytools));
		mystack = (t_mystack *)malloc(sizeof(t_mystack));
		args_parser(argv, mytools, mystack);
		mystack->len = mytools->len;
		mystack->len_a = mystack->len;
		mystack->stack_a = malloc(mystack->len * sizeof(int));
		mystack->stack_b = malloc(mystack->len * sizeof(int));
		while (i < mystack->len)
		{
			mystack->stack_a[i] = ft_atoi_push_bonus(mytools->str[i],
					mytools, mystack);
			i++;
		}
		check_dip_bonus(mystack, mytools);
		while_function(mytools, mystack);

	}
}

void	while_function(t_mytools *mytools, t_mystack *mystack)
{
	char	*str;

	str = malloc(1);
	compare_str(str,  mystack, mytools);
			free(str);
	is_sorted_bonus(mystack);
	if (mystack->is_sorted == 1 && mystack->len_b == 0)
	{
		write(1,"OK\n",3);
		simple_free_bonus(mystack, mytools);
		
	}
	else if (mystack->is_sorted == 0 || mystack->len_b != 0)
	{
		write(1,"KO\n",3);
		simple_free_bonus(mystack, mytools);
	}
}

void	compare_str(char *str, t_mystack *mystack,
		t_mytools *mytools)
{
		while (1)
	{
	str = get_next_line(0);
		if(!str)
			break;
	else if (ft_strncmp(str, "sa\n", 3) == 0)
		swap_a(mystack);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		rotate_a(mystack);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		r_rotate_a(mystack);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		push_a(mystack);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		push_b(mystack);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		rotate_b(mystack);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		r_rotate_b(mystack);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		swap_ab(mystack);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		r_rotate_ab(mystack);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		rotate_ab(mystack);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		swap_b(mystack);
	else
		error_medium_bonus(mystack, mytools);
}
}
