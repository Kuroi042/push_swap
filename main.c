#include "push_swap.h"


int main(int argc , char *argv[]){
	if(argc>1){
		argv++;
		if(argc ==2)
	  argv =  ft_split(*argv, ' ');
	 int len = ft_strlen_push(argv);
	  int  *stack_a = malloc(len* sizeof(int));
	  int i = 0;

		  while(i < len){
			stack_a[i] = ft_atoi_push(argv[i]);
		check_range_int(stack_a[i]);
			printf("%d\n",stack_a[i]);

			i++;
	  }
	  int *stack_b = ft_calloc(len,sizeof(int));
	}
	return 0;

}

 