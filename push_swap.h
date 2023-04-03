#ifndef push_swap_h

#define  push_swap_h
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>


// typedef struct t_instruction
// {


// } t_instr;


long ft_atoi_push(char *str);
int ft_strlen_push(char **str);
void check_range_int(int result);
void swap_a(int *arr, int size);


#endif
