#include "push_swap.h"

void  counter (t_mytools *mytools)
{
	while (mytools->str[mytools->len])
		mytools->len++;
}
void args_parser(char **argv, t_mytools *mytools)
{
	int i = 0;
	char *join;
	join = ft_strdup(" ");
	while (argv[i])
	{
		join = ft_strjoin(join, " ");
		join = ft_strjoin(join, argv[i]);
		i++;
	}
	mytools->str = ft_split(join, ' ');
}

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i = 0;
		argv++;

		t_mytools *mytools = malloc(sizeof(t_mytools));
		t_mystack *mystack = (t_mystack *)malloc(sizeof(t_mystack));

		args_parser(argv, mytools);
		 counter(mytools);
		  	
		    //checkstr(mytools);
		mystack->len =mytools->len;
		mystack->len_a = mystack->len;
		mystack->len_b = mystack->len;
		mystack->stack_a = malloc(mystack->len * sizeof(int));
		mystack->stack_b = malloc(mystack->len * sizeof(int));

i = 0;
while (i < mystack->len_a) {
    mystack->stack_a[i] = ft_atoi(mytools->str[i]);
    i++;
}
//  i =0;
// while(i <mystack->len){
// 	printf("stack[%d] == %d\n", i ,  mystack->stack_a[i]);
// 	i++;
// }
// int j = 0;

// while(i <mytools->len){



//check_dip( mystack);
//check_range_int(mystack);

 


if (mystack->len_a == 3)
{
	sort_three(mystack);
}
 else if (mystack->len == 5)
{
	sort_cinq(mystack);
}
 else  if (mystack->len > 5)
{
	sorting_100(mystack);
}





// 		while(i < mystack->len_b){
// 					printf("							|main.c stack_b[%d] == %d\n",i,  mystack->stack_b[i] );

// 				i++;
// 	}
//  i =0;
// 	while(i < mystack->len_a){
// 		printf("|main.c stack_a[%d] == %d\n",i,  mystack->stack_a[i] );
// 		i++;
// 	}

}
}
 	 

// // 	return 0;
// // }
