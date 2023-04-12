#include "push_swap.h"
#include <string.h>
void sorting_cent(t_mystack *mystack)
{
    int i = 0;
    mystack->temparr = ft_calloc(sizeof(int), mystack->len);
    ft_memcpy(mystack->temparr, mystack->stack_a, sizeof(int) * mystack->len);
    simplesorting(mystack, mystack->temparr);
    finder(mystack);
    range(mystack);
}

void finder(t_mystack *mystack)
{

    int i = 0; // stack_a
    int j = 0; // . temp_stack
    int *s;
    mystack->indexer = malloc(sizeof(int) * mystack->len);
    while (i < mystack->len)
    {
        j = 0;
        while (j < mystack->len)
        {
            if (mystack->stack_a[i] == mystack->temparr[j])
            {
                mystack->indexer[i] = j;
                j = mystack->len;
            }
            j++;
        }
        i++;
    }
}
void range(t_mystack *mystack)
{
    int i = 0;
    int range = 15;
    if (mystack->len > 100)
        range = 35;
    if (mystack->indexer[i] <= range)
    {
        push_b(mystack);
        rotate_b(mystack);
        i++;
    }
    else if (mystack->indexer[i] < i + range)
    {
        push_b(mystack);
        i++;
    }
    else
        rotate_a(mystack);
}
