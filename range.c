#include "push_swap.h"
#include <string.h>
void sorting_100(t_mystack *mystack)
{
    int *s;
    int i = 0;
    mystack->temparr = ft_calloc(sizeof(int), mystack->len);
    ft_memcpy(mystack->temparr, mystack->stack_a, sizeof(int) * mystack->len);
    simplesorting(mystack, mystack->temparr);
    s = finder(mystack);
    range(mystack, s);
}


int *finder(t_mystack *mystack)
{
    int i = 0; // stack_a
    int j = 0; //temp_stack
    int t = 0;
    int *s;
    s = malloc(sizeof(int) * mystack->len);
    while (i < mystack->len)
    {
        j = 0;
        while (j < mystack->len)
        {
            if (mystack->stack_a[i] == mystack->temparr[j])
            {
                s[t] = j;
                t++;
                j = mystack->len;
            }
            j++;
        }
        i++;
    }
    return(s);
}

void range(t_mystack *mystack, int *s)
{
    int range = 15;
    int i = 0;
    if (mystack->len > 100)
        range = 35;
        while(mystack->len_a){
    s = finder(mystack);
    if (s[0] < i )
    {
        push_b(mystack);
        rotate_b(mystack);
        i++;
    }
    else if (s[0] <= range + i)
    {
        push_b(mystack);
        i++;
    }
    else
        rotate_a(mystack);
    }
}
