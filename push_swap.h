/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:55:12 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/26 23:57:01 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_h

#define push_swap_h
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

typedef struct s_mytools
{
    char **str;
    int len;

} t_mytools;

typedef struct s_mystack
{
    int len;
    int *stack_a;
    int *stack_b;
    int *temparr;
    int len_a;
    int len_b;
    int is_sorted;

} t_mystack;

void args_parser(char **argv, t_mytools *mytools,t_mystack *mystack);
void counter(t_mytools *mytools);
void check_dip(t_mystack *mystack , t_mytools *mytools);
int space_error(char *str);
char *ft_strjoinpush(char *s1, char *s2);
void *ft_callocget(size_t count, size_t size);
size_t ft_strlenget(char *str);
void is_sorted(t_mystack *mystack);
void swap_a(t_mystack *mystack);
void swap_b(t_mystack *mystack);
void swap_ab(t_mystack *mystack);
void push_a(t_mystack *mystack);
void push_b(t_mystack *mystack);
void rotate_a(t_mystack *mystack);
void rotate_b(t_mystack *mystack);
void rotate_ab(t_mystack *mystack);
void r_rotate_a(t_mystack *mystack);
void r_rotate_b(t_mystack *mystack);
void sort_three(t_mystack *mysatck);
void sort_cinq(t_mystack *mystack);
void simplesorting(t_mystack *mystack, int *arr);
void sorting_100(t_mystack *mystack);
int *finder(t_mystack *mystack);
void range(t_mystack *mystack, int *s);
int big_index(t_mystack *mystack);
int smal_index(t_mystack *mystack);
void return_b(t_mystack *mystack);
void vree_stack(t_mystack *mystack);
void vree_tools(t_mytools *mytools);
void	mymapfree(char **map, t_mytools *mytools);
int ft_atoi_push(char *str);
void sign_error(char *str, t_mystack *mystack, t_mytools *mytools);
void sort_four(t_mystack *mystack);
void sort_two(t_mystack *mystack);
void sorting_machine(t_mystack *mystack);
long calculate_number(char *str, int sign);
int ft_atoi_push(char *str);
void error_normal(t_mystack *mystack, t_mytools *mytools);
void error_medium(t_mystack *mystack , t_mytools *mytools );
#endif
