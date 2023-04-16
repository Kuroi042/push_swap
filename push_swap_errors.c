#include "push_swap.h"

void checkstr(t_mytools *mytools){
int i = 0;
int j = 0;
while(i  < mytools->len){
    j = 0;
    while(mytools->str[j]){
       if(ft_isalpha(mytools->str[i][j])){
        write(2,"Error",5);
       exit(1);
       }
j++;
    }
i++;
}

}


void check_range_int(t_mystack *mystack)
{
    int i =0;
    while(mystack->stack_a[i]){
    if (mystack->stack_a[i] < INT_MIN || (mystack->stack_a[i] > INT_MAX))
    {   
        write(2,"range",5);
        exit(1);
    }
    i++;
    }
}

 
