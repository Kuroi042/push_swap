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
		mystack->stack_a = malloc(mystack->len * sizeof(int));
		mystack->len =mytools->len;
		mystack->len_a = mystack->len;
		while (i < mytools->len)
		{
			mystack->stack_a[i] = ft_atoi_push(mytools->str[i]);
			i++;
		}
		check_range_int(mystack);

		//check_dip(mystack);
		mystack->stack_b = malloc(mystack->len * sizeof(int));
		 i = 0;
	// 	while(i <mystack->len){
	// printf("mystack->stack[%d] = %d \n", i ,mystack->stack_a[i]);
	// i++;
	// 	}
	}
}