#include "push_swap.h"
#include <string.h>



int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i = 0;
		argv++;

		t_mytools *mytools = (t_mytools *)malloc(sizeof(t_mytools));
		t_mystack *mystack = (t_mystack *)malloc(sizeof(t_mystack));

		args_parser(argv, mytools);
		 counter(mytools);
		   checkstr(mytools);
		   
		mystack->len =mytools->len;
		mystack->len_a = mystack->len;
		mystack->stack_a = malloc(mystack->len * sizeof(int));
		mystack->stack_b = malloc(mystack->len * sizeof(int));

i = 0;
while (i < mystack->len) {
    mystack->stack_a[i] = ft_atoi_push(mytools->str[i]);
		
    i++;
}
 
while(i < mytools->len){
	printf("mystack->stack_[%d] = %d\n",i,mystack->stack_a[i]);
	i++;
}

 check_dip( mystack);
is_sorted( mystack);

if(mystack->is_sorted == 0){
if(mystack->len == 2)
	sort_two(mystack);
	
else if (mystack->len == 3)
	sort_three(mystack);
else if(mystack->len == 4)
	 sort_four(mystack);
  else if (mystack->len == 5)
	sort_cinq(mystack);
 if (mystack->len > 5)
	sorting_100(mystack);
}
i = 0;
// while(i < mytools->len){
// 	printf("mystack->stack_[%d] = %d\n",i,mystack->stack_a[i]);
// 	i++;
// }
}
// else if(argc == 1){
// write(2,"Error\n",6);
// exit(1);
// }


}
 	 

