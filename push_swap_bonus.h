/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:18:32 by mbouderr          #+#    #+#             */
/*   Updated: 2023/04/29 00:15:11 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H

#define PUSH_SWAP_BONUS_H
# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

typedef struct s_mytools
{
	char	**str;
	int		len;
	char	*join;
}			t_mytools;

typedef struct s_mystack
{
	int		len;
	int		*stack_a;
	int		*stack_b;
	int		*temparr;
	int		len_a;
	int		len_b;
	int		is_sorted;
	int		*index;

}			t_mystack;

void		args_parser(char **argv, t_mytools *mytools, t_mystack *mystack);
void		counter(t_mytools *mytools);
void		check_dip(t_mystack *mystack, t_mytools *mytools);
int			space_error(char *str);
void	    is_sorted(t_mystack *mystack, t_mytools *mytools);
int			ft_atoi_push(char *str , t_mytools *mytools , t_mystack *mystack);
void		sign_error(char *str, t_mystack *mystack, t_mytools *mytools);
long		calculate_number(char *str, int sign, t_mytools *mytools , t_mystack *mystack);
void		error_normal(t_mystack *mystack, t_mytools *mytools);
void		error_medium(t_mystack *mystack, t_mytools *mytools);
void		simple_free(t_mystack *mystack, t_mytools *mytools);
void	    mymapfree(char **map, t_mytools *mytools);
//void        whiler(char *argv ,t_mystack *mystack , t_mytools *mytools);
void		swap_a(t_mystack *mystack);//
void		swap_b(t_mystack *mystack);//
void		swap_ab(t_mystack *mystack);//makeads
void		push_a(t_mystack *mystack);//
void		push_b(t_mystack *mystack);//
void		rotate_a(t_mystack *mystack);//
void		rotate_b(t_mystack *mystack);//
void		rotate_ab(t_mystack *mystack);//
void		r_rotate_a(t_mystack *mystack);//
void		r_rotate_b(t_mystack *mystack);//

#endif