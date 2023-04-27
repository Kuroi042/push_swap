/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_errors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:55:08 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/27 00:00:31 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// void print_array(char **arr, int len) {
//     int i = 0;
//     while (i < len) {
//         int j = 0;
//         while (arr[i][j] != '\0') {
//             printf("%c ", arr[i][j]);
//             j++;
//         }
//         printf("\n");  // print newline at end of each row
//         i++;
//     }
// }


// int	ft_isnumber(int c)
// {
// 	if ((c >= '0' && c <= '9') || (c == '+' || c == '-'))
// 	{
// 		return (0);
// 	}
// 	else
// 		return (1);
// }

void	check_dip(t_mystack *mystack , t_mytools *mytools)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (mystack->stack_a[i])
	{
		j = i + 1;
		while (mystack->stack_a[j])
		{
			if (mystack->stack_a[i] == mystack->stack_a[j]){
				free(mystack->stack_a);
				error_medium( mystack ,  mytools);
			}
					
			else
				j++;
		}
		i++;
	}
}

void	is_sorted(t_mystack *mystack)
{
	int	i;

	i = 0;
	while (i < mystack->len - 1)
	{
		if (mystack->stack_a[i] > mystack->stack_a[i + 1])
		{
			mystack->is_sorted = 0;
			break ;
		}
		i++;
	}
	if (i == mystack->len - 1)
	{
		mystack->is_sorted = 1;
	}
}

int	space_error(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

void	sign_error(char *str,t_mystack *mystack , t_mytools *mytools)
{
	char c = '\0';
	char s = ' ';
	int i = 0;
	while (str[i])
	{
		if ((str[i] == '+' || str[i] == '-') && ((str[i + 1] == c) || (str[i
					+ 1] == s))){
			error_normal( mystack ,  mytools );
					}
		i++;
	}
}