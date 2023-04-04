#include "push_swap.h"


int main(int argc , char *argv[]){
	if(argc>1){
		argv++;
		if(argc ==2)

	  argv =  ft_split(*argv, ' ');
	t_mystack *mystack;
	mystack = (t_mystack*)malloc(sizeof(t_mystack));
	 mystack->len = ft_strlen_push(argv);
	 mystack->stack_a = malloc(mystack->len* sizeof(int));
	  int i = 0;

		  while(i < mystack->len){
			mystack->stack_a[i] = ft_atoi_push(argv[i]);
		check_range_int(mystack->stack_a[i]);
			i++;
	  }
	  mystack->stack_b = malloc(mystack->len*sizeof(int));

	//    mystack->stack_b[0] = 1;
	//    	   mystack->stack_b[1] = 2;
	// 	   	   mystack->stack_b[2] = 3;
	// 		   	   mystack->stack_b[3] = 4;
	  mystack->len_a = mystack->len;
	mystack->len_b = 0;
	// swap_a(mystack);
push_b(mystack);
push_b(mystack);
push_b(mystack);

		// swap_a(mystack);
		i = 0;
				while(i < mystack->len_b){
			printf("stack_b[%d] == %d\n",i, mystack->stack_b[i]);
			i++;
		}
		printf("len %d", mystack->len_b);
		printf("XXXXXXXXXXXX\n");
	//   i = 0;
	// 	while(i < mystack->len_a){
	// 		printf("stack_a[%d] == %d\n", i, mystack->stack_a[i]);
	// 		i++;
	// 	}





	}
	return 0;

}

	//    while(i < mystack->len){



 