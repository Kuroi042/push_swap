
#include "push_swap.h"


void  counter (t_mytools *mytools)
{
	while (mytools->str[mytools->len])
		mytools->len++;
}

void args_parser(char **argv, t_mytools *mytools)
{
	int i = 0;
	int j = 0;
	char *join;
	join = ft_strdup(" ");
	while (argv[i])
	{
		if(space_error(argv[i])){
			write(2,"Error\n",6);
			exit(1);
		}
		print_array(argv[i]);
		join = ft_strjoinpush(join, " ");
		join = ft_strjoinpush(join, argv[i]);
		i++;
	}
	mytools->str = ft_split(join , ' ');
	free(join);
	}

