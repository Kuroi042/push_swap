#include "push_swap.h"

long ft_atoi_push(char *str) {
    int i = 0;
    int sign = 1;
    long long result = 0;

    while (str[i] == ' ')
        i++;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-') {
        i++;
        sign *= -1;
    }
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            int digit = str[i] - '0';
            result = result * 10 + digit;
            if ((sign * result) > INT_MAX || (sign * result) < INT_MIN) {
                printf("number out of range\n");
                exit(1);
            }
        } else {
            printf(" not a digit\n");
            exit(1);
        }
        i++;
    }
    return sign * (int)result;
}
int ft_strlen_push(char **str){
	int	i;
	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return i;
}
void check_range_int(int result){

   if ( result < INT_MIN || ( result > INT_MAX)){
	printf("number out of the range\n");
	exit(1);
   }

}
