/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:55:20 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/27 16:14:26 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
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
			mystack->stack_a[i] = ft_atoi_push(mytools->str[i]);
			i++;
		}
		check_dip(mystack ,mytools);
		is_sorted(mystack,mytools);
		sorting_machine(mystack,mytools);
		//error_medium( mystack , mytools);
		// i = 0;
		// while(i <mystack->len_a){
		// 	printf("mystack->stack_a[%d]=%d\n",i,mystack->stack_a[i]);
		// i++;
		// }
	}
}

void	sorting_machine(t_mystack *mystack, t_mytools *mytools)
{
	if (mystack->is_sorted == 0)
	{
		if (mystack->len == 2){
			sort_two(mystack);
	

		}
		else if (mystack->len == 3){
			sort_three(mystack);
			//error_medium( mystack , mytools);
			vree_stack( mystack, mytools);

		}
		else if (mystack->len == 4){
			sort_four(mystack);
			//error_medium( mystack , mytools);
			vree_stack( mystack, mytools);
		
		}
		else if (mystack->len == 5){
			sort_cinq(mystack);
				//error_medium( mystack , mytools);
				vree_stack( mystack, mytools);
		}
		if (mystack->len > 5){
			sorting_100(mystack);	 
				//error_medium( mystack , mytools);
				vree_stack( mystack, mytools);
 
	}
	}
}
