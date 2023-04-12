#ifndef push_swap_h

#define  push_swap_h
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>


typedef struct  s_mystack
{
 int len;
 int *stack_a;
 int *stack_b;
 int *temparr;
 int *indexer;
 int len_a;
 int len_b;
 int i;

} t_mystack;

   
long ft_atoi_push(char *str);
int ft_strlen_push(char **str);
void check_range_int(int result);
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
void sorting_cent(t_mystack *mystack);
void finder(t_mystack *mystack);
void range(t_mystack *mystack);

#endif
