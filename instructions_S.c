#include "push_swap.h"

void swap_a(t_mystack *mystack){

int i = 0;

if( mystack->len == 0 || mystack->len == 1){}
else if(mystack->len >1 ){
    int temp = 0;
    temp = mystack->stack_a[0];
    mystack->stack_a[0] = mystack->stack_a[1];
    mystack->stack_a[1] = temp;
      
printf("sa\n");
}

	}

void swap_b(t_mystack *mystack){

int i = 0;

if( mystack->len == 0 || mystack->len == 1){}
else if(mystack->len >1 ){
    int temp = 0;
    temp = mystack->stack_b[0];
    mystack->stack_b[0] = mystack->stack_b[1];
    mystack->stack_b[1] = temp;  
printf("sa\n");
}
	}
void swap_ab(t_mystack *mystack){
swap_a(mystack);
swap_b(mystack);
printf("ss\n");
}

void push_a(t_mystack *mystack){
if(mystack->stack_b){
mystack->len_a++;
int i = mystack->len_a;
while(i>0){
    mystack->stack_a[i]= mystack->stack_a[i-1];
    i--;
}
    mystack->stack_a[0]= mystack->stack_b[0];
      mystack->len_b--;
    while(i < mystack->len_b){
          mystack->stack_b[i] = mystack->stack_b[i+1];
          i++;
    }
printf("pa\n");
}
}

void push_b(t_mystack *mystack){
if(mystack->stack_a){
    mystack->len_b++;
  int   i = mystack->len_b;
    while(i > 0){
        mystack->stack_b[i] = mystack->stack_b[i-1];
        i--;
}
    mystack->stack_b[0] =  mystack->stack_a[0];
    mystack->len_a--;
    while(i < mystack->len_a){
        mystack->stack_a[i] = mystack->stack_a[i+1];
        i++;
    }
    printf("pb\n");
}
}
void rotate_a(t_mystack *mystack){
if(mystack->stack_a){
int i = 0;
int azero = mystack->stack_a[0];
while(i <mystack->len_a ){
  mystack->stack_a[i] = mystack->stack_a[i+1];
        i++;
}
  mystack->stack_a[ mystack->len_a-1] = azero;

printf("ra\n");
}
}

void rotate_b(t_mystack *mystack){
if(mystack->stack_b){
int i = 0;
int bzerow = mystack->stack_b[0];
while(i <mystack->len_b ){
  mystack->stack_b[i] = mystack->stack_b[i+1];
        i++;
}
  mystack->stack_b[ mystack->len_b-1] = bzerow;

printf("rb\n");
}
}
void rotate_ab(t_mystack *mystack){
rotate_a(mystack);
rotate_b(mystack); 
printf("rab\n");
}

void r_rotate_a(t_mystack *mystack){

int i = mystack->len_a;
int rotate = mystack->stack_a[mystack->len_a-1];
while(i > 0){
    mystack->stack_a[i] = mystack->stack_a[i-1];
    i--;
}
mystack->stack_a[0] = rotate;
printf("rra\n");
}


void r_rotate_b(t_mystack *mystack){
    
int i = mystack->len_b;
int rotate = mystack->stack_b[mystack->len_b-1];
while(i > 0){
    mystack->stack_b[i] = mystack->stack_b[i-1];
    i--;
}
mystack->stack_b[0] = rotate;
printf("rrb\n");
}
