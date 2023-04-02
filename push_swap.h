#ifndef push_swap_h

#define  push_swap_h
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


typedef struct s_checker
{
    int incre;
   char *args;

} t_checker;

// int ft_atoi_swap(char *str);
int ft_strlen_push(char **str);


#endif
