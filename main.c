#include "push_swap.h"
#include <stdio.h>

int	ft_atoi_swap(char *str[])
{
	size_t	i;
	int		sign;
	int		nbr;

	nbr = 0;
	sign = 1;
	i = 0;

	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f'){
		 str[i++];
        }

	if (str[i] == '-')
	{
		i++;
		sign = sign * -1;
	}
	else if ( str[i] == '+')
		i++;
	while  (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr  *10) + (str[i] - '0');
		i++;
	}

	return (nbr * sign);
}



int main(int argc , char *argv[]){
    t_data_checker *checker;
    int  *str = malloc(1);
int i = 1;
      argv++;
    if(argc == 2){
    argv = ft_split(*argv ,' ');
    }
while(i < argc ){
  str[i] = ft_atoi_swap(argv);
    printf("%d", str[i]);
 i++;
}

}
 