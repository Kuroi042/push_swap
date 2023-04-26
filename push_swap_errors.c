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
void checkstr(t_mytools *mytools)
{
    int i = 0;
    int j = 0;
    while (i < mytools->len)
    {
        while (mytools->str[i][j])
        {
            if (ft_isnumber(mytools->str[i][j]))
            {
                write(2, "Error\n", 6);
                // vree_tools(mytools);
                exit(1);
            }
            j++;
        }
        j = 0;
        i++;
    }
}


int ft_isnumber(int c)
{
    if ((c >= '0' && c <= '9') || (c == '+' || c == '-'))
    {
        return (0);
    }
    else
        return (1);
}

void check_range_int(int nbr)
{

	   if ((nbr) > INT_MAX || (nbr) < INT_MIN) {
                write(2,"Error\n",6);
                exit(1);
            }

}
// void check_signs(char *str){
//     int i = 0;
//     while(str[i]){
// if(str[i]== '-' && str[i+1] == '-')

//     }
//     }


// }
void check_dip(t_mystack *mystack)
{
    int i = 0;
    int j = 0;
    while (mystack->stack_a[i])
    {
        j = i + 1;
        while (mystack->stack_a[j])
        {
            if (mystack->stack_a[i] == mystack->stack_a[j])
            {
                write(2, "Error\n", 6);
                // vree_stack(mystack);
                exit(1);
            }
            else
                j++;
        }
        i++;
    }
}

void is_sorted(t_mystack *mystack)
{
    int i = 0;
    while (i < mystack->len - 1)
    {
        if (mystack->stack_a[i] > mystack->stack_a[i + 1])
        {
            mystack->is_sorted = 0;
            break;
        }
        i++;
    }
    if (i == mystack->len - 1)
    {
        mystack->is_sorted = 1;
    }
}


int space_error(char *str)
{

    int i = 0;

    if(str[0] == '\0')
    {
        printf("errrrror\n");
        exit(1);
    }
    while(str[i]){
      if (str[i] != ' ')
         return 0;
        i++;
    }
    return (1);
}

void print_array(char *str) {
       char c = '\0';
       char s = ' ';
    int i = 0;
while(str[i]){
            if((str[i] == '+' || str[i] == '-')&&((str[i+1] == c)||(str[i+1] == s))){
                write(2,"Error\n",6);
                exit(1);
            
            }

i++;
}
}