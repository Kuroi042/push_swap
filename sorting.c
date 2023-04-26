#include "push_swap.h"

// If a is greater than b, swap a and b.
// If a is greater than c, swap a and c.
// If b is greater than c, swap b and c.

void sort_two(t_mystack *mystack){
if(mystack->stack_a[0]>mystack->stack_a[1])
	swap_a(mystack);
}
void sort_three(t_mystack *mystack){

	if (mystack->stack_a[0] > mystack->stack_a[1] && mystack->stack_a[0] < mystack->stack_a[2]
		&& mystack->stack_a[1] < mystack->stack_a[2])
		swap_a(mystack);
else if (mystack->stack_a[0] > mystack->stack_a[1] && mystack->stack_a[0] > mystack->stack_a[2]
		&& mystack->stack_a[1] > mystack->stack_a[2])
	{
		swap_a(mystack );
		r_rotate_a(mystack );
	}
else if(mystack->stack_a[0] > mystack->stack_a[1] && mystack->stack_a[0] > mystack->stack_a[2]
		&& mystack->stack_a[1] < mystack->stack_a[2])
		rotate_a(mystack);
else if (mystack->stack_a[0] < mystack->stack_a[1] && mystack->stack_a[0] < mystack->stack_a[2]
		&& mystack->stack_a[1] > mystack->stack_a[2])
	{
		swap_a(mystack);
		rotate_a(mystack);
	}

else if (mystack->stack_a[0] < mystack->stack_a[1] && mystack->stack_a[0] > mystack->stack_a[2]
		&& mystack->stack_a[1] > mystack->stack_a[2])
		r_rotate_a(mystack);

}
void sort_four(t_mystack *mystack){
	int i = 0;
	while(mystack->len_a>3){
	if(smal_index(mystack) == 0 ){
	  push_b(mystack);
	}
	if(smal_index(mystack) <= mystack->len_a/2)
		rotate_a(mystack);
	else if(smal_index(mystack) >= mystack->len_a/2){
		r_rotate_a(mystack);
		i++;
	}
	}
	sort_three(mystack);
	push_a(mystack);
}
void sort_cinq(t_mystack *mystack){
	int i =0;
 //printf("index = %d\n", smal_index(mystack));
while(mystack->len_a>3){
	if(smal_index(mystack) == 0 ){
		//printf("i == %d && mystack->stack[%d] = %d index== %d\n", i , i ,mystack->stack_a[i] , smal_index(mystack));
	  push_b(mystack);
	}
  if(smal_index(mystack) <=(mystack->len_a/2) ){ 
	rotate_a(mystack);
}
else if((smal_index(mystack)>= mystack->len_a/2 ))
	r_rotate_a(mystack);
	i++;
}
sort_three(mystack);
 push_a(mystack);
push_a(mystack);
}


void simplesorting(t_mystack *mystack ,  int  *arr) {
     int		 i;
	 int 		 j;
	 int  temp = 0;
	i = 0;
    while( i < mystack->len - 1 ) {
	j = 0;
        while( j < mystack->len - i - 1) {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
			 j++;
        }
		i++;
    }
}
