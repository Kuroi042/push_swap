#include "push_swap_bonus.h"
#include <string.h>
int main(int argc , char *argv[])
{ 
    int			i;
	t_mytools	*mytools;
    t_mystack	*mystack;
    if (argc > 1)
	{
		i = 0;
		argv++;
		mytools = (t_mytools *)malloc(sizeof(t_mytools));
		mystack = (t_mystack *)malloc(sizeof(t_mystack));
        args_parser(argv, mytools, mystack);
        mystack->len = mytools->len;
		mystack->len_a = mystack->len;
        mystack->stack_a = malloc(mystack->len * sizeof(int));
		mystack->stack_b = malloc(mystack->len * sizeof(int));
        while (i < mystack->len)
		{
			mystack->stack_a[i] = ft_atoi_push(mytools->str[i],
					mytools, mystack);
			i++;
		}
        // i = 0;
        // while(i < mystack->len){
        //         printf("mystack->stack[%d] = %d\n", i , mystack->stack_a[i]);
        //         i++;
        // }
    char str[1024];
 while (1)
        {
            int nread = read(STDIN_FILENO, str, 1024);
            if (nread == -1)
            {
                perror("read error");
                exit(1);
            }
                else if (nread == 0)
    {
        // End of file reached, exit the loop
        break;
    }
            else if (nread > 0)
            {
                //Remove newline character if present
                if (str[nread - 1] == '\n')
                {
                    str[nread - 1] = '\0';
                    nread--;
                }
                // Null-terminate the input string
                str[nread] = '\0';
                if (strcmp(str, "sa\n") == 0)
                    swap_a(mystack);
                else if (strcmp(str, "ra\n") == 0)
                    rotate_a(mystack);
                else if (strcmp(str, "rra\n") == 0)
                    r_rotate_a(mystack);   
                else if (strcmp(str, "pa\n") == 0)
                    push_a(mystack);   
                else if (strcmp(str, "pb\n") == 0)
                    push_b(mystack);    
                  else if (strcmp(str, "rb\n") == 0)
                    rotate_b(mystack); 
                  else if (strcmp(str, "rrb\n") == 0)
                    r_rotate_a(mystack);   
                else if (strcmp(str, "ss\n") == 0)
                    swap_ab(mystack);   
                    else if (strcmp(str, "rab\n") == 0)
                    rotate_ab(mystack);   
                    else if (strcmp(str, "sb\n") == 0)
                    swap_b(mystack);  
                else
                {
                    printf("Error\n");
                }
            }
        }
        is_sorted( mystack, mytools);
        if(mystack->is_sorted == 1)
            printf("OK\n");
    }
}

