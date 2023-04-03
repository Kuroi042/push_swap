#include "push_swap.h"

void swap_a(int *arr, int size){

int i = 0;

if(size == 0 || size == 1){}
else if(size >1 ){
    int temp = 0;
    temp = arr[size];
    printf("temp = %d\n",temp);
    arr[size] = arr[size-1];
    arr[size-1] = temp;
    printf("sa\n");
}


}