#include "push_swap.h"

long ft_atoi_push(char *str)
{
    int i = 0;
    int sign = 1;
    long long result = 0;

    while (str[i] == ' ')
        i++;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        i++;
        sign *= -1;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            int digit = str[i] - '0';
            result = result * 10 + digit;
            if ((sign * result) > INT_MAX || (sign * result) < INT_MIN)
            {
                printf("number out of range\n");
                exit(1);
            }
        }
        else
        {
            printf(" not a digit\n");
            exit(1);
        }
        i++;
    }
    return sign * (int)result;
}
void check_range_int(t_mystack *mystack)
{
    int i =0;
    while(mystack->stack_a[i]){
    if (mystack->stack_a[i] < INT_MIN || (mystack->stack_a[i] > INT_MAX))
    {
        printf("number out of the range\n");
        exit(1);
    }
    i++;
    }
}

void check_dip(t_mystack *mystack)
{

    int i = 0;
    int j = mystack->len;
    while (i < mystack->len)
    {   
        while (j > 0)
        {

            if (mystack->stack_a[j] == mystack->stack_a[i])
            {
                printf("stack->\n");
            }
            j--;
        }
        i++;
    }
}
