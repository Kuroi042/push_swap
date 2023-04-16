#include "push_swap.h"
// void print_array(char **arr, int len) {
//     int i = 0;
//     while (i < len) {
//         int j = 0;
//         while (arr[i][j] != '\0') {
//             printf("%c ", arr[i][j]);
//             j++;
//         }
//         printf("\n");  // print newline at end of each row
//         i++;
//     }
// }
void checkstr(t_mytools *mytools){
    int i = 0;
    int j = 0;
    while(i  < mytools->len){
        while(mytools->str[i][j]){
            // if(mytools->str[i][j] == '\0'){
            //     break; // exit inner loop if end of string is reached
            // }
             //printf("str[] === %c\n", mytools->str[i][j]);
            if(ft_isnumber(mytools->str[i][j])){
                write(2, "alpha", 5);
                exit(1);
            }
            j++;
        }
        j = 0; // reset j for next row
        i++;
    }
}

 
void checkempty(t_mytools *mytools) {
    int i, j;
    i = 0;
    while ( i < mytools->len ) {
        j = 0;
        while ( j <=mytools->len) {
   
            if (mytools->str[i][j] == '\0') {
                write(2,"empty",5);
                exit(1);
            }
            j++;
        }
        i++;
    }
}
int	ft_isnumber(int c)
{
   if(( c >= '0' && c <= '9') || (c == '+' || c == '-'))
   {
	return (0);
   }
    else 
    return (1);
}

void check_range_int(t_mystack *mystack)
{
    int i =0;
    while(mystack->stack_a[i]){
    if (mystack->stack_a[i] < INT_MIN || (mystack->stack_a[i] > INT_MAX))
    {   
        write(2,"range",5);
        exit(1);
    }
    i++;
    }
}
void check_dip(t_mystack *mystack){
int i  =0;
int j = 0;
	while (mystack->stack_a[i])
	{
		j = i + 1;
		while (mystack->stack_a[j])
		{
			if (mystack->stack_a[i] == mystack->stack_a[j]){
				write(2,"dup",3);
                exit(1);
            }
			else
				j++;
		}
		i++;
	}

}

int is_sorted(t_mystack *mystack) {
    int i = 0;
    while (i < mystack->len - 1) {
        if (mystack->stack_a[i] >mystack->stack_a[i + 1]) {
            return 1; // not sorted
        }
        i++;
    }
    if (i == mystack->len - 1) {
       // array is sorted, print newline
    }
    return 0; // sorted
}

 
