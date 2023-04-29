#include "push_swap_bonus.h"

void	simple_free_bonus(t_mystack *mystack, t_mytools *mytools)
{
	mymapfree(mytools->str, mytools);
	free(mystack->stack_a);
	free(mystack->stack_b);
	free(mystack);
	free(mytools);
	exit(1);
}

void	mymapfree(char **map, t_mytools *mytools)
{
	int	i;

	i = 0;
	while (i < mytools->len)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

void	error_medium_bonus(t_mystack *mystack, t_mytools *mytools)
{
	write(2, "Error\n", 6);
	mymapfree(mytools->str, mytools);
	free(mystack->stack_a);
	free(mystack->stack_b);
	free(mystack);
	free(mytools);
	exit(0);
}

void	error_normal_bonus(t_mystack *mystack, t_mytools *mytools)
{
	write(2, "Error\n", 6);
	free(mytools->join);
	free(mytools);
	free(mystack);
	exit(1);
}