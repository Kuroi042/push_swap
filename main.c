#include "push_swap.h"
#include <string.h>
void  counter (t_mytools *mytools)
{
	while (mytools->str[mytools->len])
		mytools->len++;
}
void args_parser(char **argv, t_mytools *mytools)
{
	int i = 0;
	int j = 0;
	char *join;
	join = ft_strdup(" ");
	while (argv[i])
	{
		if(space_error(argv[i])){
			write(2,"Error\n",6);
			exit(1);
		}
		join = ft_strjoinpush(join, " ");
		join = ft_strjoinpush(join, argv[i]);
		i++;
	}
	mytools->str = ft_split(join , ' ');
	free(join);
	}


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
 
// while(i < mytools->len){
// 	printf("mystack->stack_[%d] = %d\n",i,mystack->stack_a[i]);
// 	i++;
// }
//  check_range_int( mystack);

 check_dip( mystack);
is_sorted( mystack);

if(mystack->is_sorted == 0){
if (mystack->len == 3)
	sort_three(mystack);
  else if (mystack->len == 5)
	sort_cinq(mystack);
 if (mystack->len > 5)
	sorting_100(mystack);
}
}
else if(argc == 1){
write(2,"Error\n",6);
exit(1);
}


}
 	 

