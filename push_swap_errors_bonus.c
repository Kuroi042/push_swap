#include "push_swap_bonus.h"

void	args_parser(char **argv, t_mytools *mytools, t_mystack *mystack)
{
	int		i;
	int		j;
	char	*lol;

	i = 0;
	j = 0;
	mytools->join = ft_strdup(" ");
	lol = ft_strdup(" ");
	while (argv[i]!= '\0')
	{
		if (space_error(argv[i]))
		{
			error_normal_bonus(mystack, mytools);
		}
		sign_error(argv[i], mystack, mytools);
		mytools->join = ft_strjoin(mytools->join, lol);
		mytools->join = ft_strjoin(mytools->join, argv[i]);
		i++;
	}
	free(lol);
	mytools->str = ft_split(mytools->join, ' ');
	free(mytools->join);
	counter(mytools);
}

void	sign_error(char *str, t_mystack *mystack, t_mytools *mytools)
{
	char	c;
	int		i;
	char	s;

	c = '\0';
	s = ' ';
	i = 0;
	while (str[i])
	{
		if ((str[i] == '+' || str[i] == '-') && ((str[i + 1] == c) || (str[i
						+ 1] == s)))
		{
			error_normal_bonus(mystack, mytools);
		}
		i++;
	}
}

int	space_error(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

void	counter(t_mytools *mytools)
{
	while (mytools->str[mytools->len])
		mytools->len++;
}

void	is_sorted_bonus(t_mystack *mystack, t_mytools *mytools)
{
	int	i;

	i = 0;
	while (i < mystack->len - 1)
	{
		if (mystack->stack_a[i] > mystack->stack_a[i + 1])
		{
			mystack->is_sorted = 0;
			break;
		}
		i++;
	}
	//sorted
	if (i == mystack->len - 1  )
	{	
		mystack->is_sorted = 1;
		}
	}

void	check_dip_bonus(t_mystack *mystack, t_mytools *mytools)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i != mystack->len)
	{
		j = i + 1;
		while (j != mystack->len)
		{
			if (mystack->stack_a[i] == mystack->stack_a[j])
			{
				error_medium_bonus(mystack, mytools);
			}
			else
		 	j++;
		}
		i++;
	}
}

