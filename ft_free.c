#include "push_swap.h"



void	vree_stack(t_mystack *mystack)
{
	free(mystack->stack_a);
    free(mystack->stack_b);

	mystack = NULL;

	free(mystack);
 
}
void vree_tools(t_mytools *mytools){
    mymapfree(mytools->str, mytools);
    mytools = NULL;
       free(mytools);
}

void	mymapfree(char **map, t_mytools *mytools)
{
	int	i;

	i = 0;
	while (i <= mytools->len)
	{
		free(map[i]);
		i++;
	}
	free(map);
}