/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:59:15 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/29 21:38:03 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include <string.h>

int	main(int argc, char *argv[])
{
	int			i;
	t_mytools	*mytools;
	t_mystack	*mystack;
	int			nread;

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
	int		nread;
	char	*str;

	str = malloc(1);
	while (1)
	{
		nread = read(STDIN_FILENO, str, 5);
		if (nread == -1)
			error_medium_bonus(mystack, mytools);
		else if (nread == 0)
			break ;
		else if (nread > 0)
			compare_str(nread, str, mystack, mytools);
	}
	is_sorted_bonus(mystack, mytools);
	if (mystack->is_sorted == 1 && mystack->len_b == 0)
	{
		printf("OK\n");
		simple_free_bonus(mystack, mytools);
	}
	else if (mystack->is_sorted == 0 || mystack->len_b != 0)
	{
		printf("KO\n");
		simple_free_bonus(mystack, mytools);
	}
}

void	compare_str(int nread, char *str, t_mystack *mystack,
		t_mytools *mytools)
{
	str[nread] = '\0';
	if (ft_strncmp(str, "sa", 2) == 0)
		swap_a(mystack);
	else if (ft_strncmp(str, "ra", 2) == 0)
		rotate_a(mystack);
	else if (ft_strncmp(str, "rra", 3) == 0)
		r_rotate_a(mystack);
	else if (ft_strncmp(str, "pa", 2) == 0)
		push_a(mystack);
	else if (ft_strncmp(str, "pb", 2) == 0)
		push_b(mystack);
	else if (ft_strncmp(str, "rb", 2) == 0)
		rotate_b(mystack);
	else if (ft_strncmp(str, "rrb", 3) == 0)
		r_rotate_b(mystack);
	else if (ft_strncmp(str, "ss", 2) == 0)
		swap_ab(mystack);
	else if (ft_strncmp(str, "rab", 3) == 0)
		rotate_ab(mystack);
	else if (ft_strncmp(str, "sb", 2) == 0)
		swap_b(mystack);
	else
		error_medium_bonus(mystack, mytools);
}
