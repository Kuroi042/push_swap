/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:55:36 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/27 21:57:01 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	vree_stack(t_mystack *mystack,t_mytools *mytools)
{
	mymapfree(mytools->str, mytools);
	free(mytools);
 	 free(mystack->stack_a);
	free(mystack->stack_b);
	free(mystack->temparr);
	free(mystack);
}

void	vree_tools(t_mytools *mytools)
{

}

void	mymapfree(char **map, t_mytools *mytools)
{
	int i;

	i = 0;
	while (i < mytools->len)
	{
		free(map[i]);
		i++;
	}
 
	free(map);
}
void error_normal(t_mystack *mystack , t_mytools *mytools ){
			write(2, "Error\n", 6);
			free(mytools->join);
			free(mytools);
			free(mystack);
			exit(1);
}

void error_medium(t_mystack *mystack , t_mytools *mytools ){
		write(2, "Error\n", 6);
		mymapfree(mytools->str, mytools);
		free(mystack->stack_a);
		free(mystack->stack_b);
			free(mystack);
			free(mytools);
			exit(0);
}

void simple_free(t_mystack *mystack , t_mytools *mytools ){
		mymapfree(mytools->str, mytools);
		free(mystack->stack_a);
		free(mystack->stack_b);
			free(mystack);
			free(mytools);
			exit(0);
}



