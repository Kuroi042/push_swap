#include "push_swap.h"

// If a is greater than b, swap a and b.
// If a is greater than c, swap a and c.
// If b is greater than c, swap b and c.


void sort_three(t_mystack *mystack){


	if (mystack->stack_a[0] > mystack->stack_a[1] && mystack->stack_a[0] < mystack->stack_a[2]
		&& mystack->stack_a[1] < mystack->stack_a[2])
		swap_a(mystack);
	if (mystack->stack_a[0] > mystack->stack_a[1] && mystack->stack_a[0] > mystack->stack_a[2]
		&& mystack->stack_a[1] > mystack->stack_a[2])
	{
		swap_a(mystack );
		r_rotate_a(mystack );
	}
	if (mystack->stack_a[0] > mystack->stack_a[1] && mystack->stack_a[0] > mystack->stack_a[2]
		&& mystack->stack_a[1] < mystack->stack_a[2])
		rotate_a(mystack);
	if (mystack->stack_a[0] < mystack->stack_a[1] && mystack->stack_a[0] < mystack->stack_a[2]
		&& mystack->stack_a[1] > mystack->stack_a[2])
	{
		swap_a(mystack);
		rotate_a(mystack);
	}
	if (mystack->stack_a[0] < mystack->stack_a[1] && mystack->stack_a[0] > mystack->stack_a[2]
		&& mystack->stack_a[1] > mystack->stack_a[2])
		r_rotate_a(mystack);

}

void sort_cinq(t_mystack *mystack){
 
 	simplesorting(mystack);
	push_b(mystack);
	push_b(mystack);
	sort_three(mystack);
	push_a(mystack);
	push_a(mystack);
}

void simplesorting(t_mystack *mystack) {
    int i, j, temp;
	i = 0;
    while( i < mystack->len - 1 ) {
	j = 0;
        while( j < mystack->len - i - 1) {
            if(mystack->stack_a[j] > mystack->stack_a[j+1]) {
                temp = mystack->stack_a[j];
                mystack->stack_a[j] = mystack->stack_a[j+1];
                mystack->stack_a[j+1] = temp;
            }
			 j++;
        }
		i++;
    }
}
