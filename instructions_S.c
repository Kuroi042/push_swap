#include "push_swap.h"

void swap_a(t_mystack *mystack){

int i = 0;

if( mystack->len == 0 || mystack->len == 1){}
else if(mystack->len >1 ){
    int temp = 0;
    temp = mystack->stack_a[0];
    mystack->stack_a[0] = mystack->stack_a[1];
    mystack->stack_a[1] = temp;
      
}
printf("sa\n");
// while(i < mystack->len){
//     printf("%d ",mystack->stack_a[i]);
//     i++;
// }
	}

void swap_b(t_mystack *mystack){

int i = 0;

if( mystack->len == 0 || mystack->len == 1){}
else if(mystack->len >1 ){
    int temp = 0;
    temp = mystack->stack_b[0];
    mystack->stack_b[0] = mystack->stack_b[1];
    mystack->stack_b[1] = temp;  
}
printf("sa\n");
	}
void swap_ab(t_mystack *mystack){
swap_a(mystack);
swap_b(mystack);
printf("ss\n");
}

//XXXXXXXXXXXXXXXXXXXXXXX
void push_a(t_mystack *mystack){
if(!mystack->len_b){
    printf("stack_empty\n");
    exit(0);
}
else {
    mystack->stack_a[0] = mystack->stack_b[0];
    mystack->len_b--;
    mystack->len_a++;
}
printf("pa\n");
}
//XXXXXXXXXXXXXXXXXXXXXXX

void push_b(t_mystack *mystack){
if(!mystack->len_a){
    printf("stack_a is empty");
}
else if(in{

   mystack->index_b = 0;
    mystack->index_b++;
    mystack->stack_b[ mystack->index_b] = mystack->stack_a[ mystack->index_a];
  mystack->index_a--;
    //  mystack->i++;
   

}
     printf("pb\n");
}
void rotate_a(t_mystack *mystack){
}




