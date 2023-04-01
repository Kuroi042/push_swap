#include "push_swap.h"
#include <stdio.h>


int main(int argc , char *argv[]){
    t_data_checker *checker;
int i = 1;
      argv++;
    if(argc == 2){
    argv = ft_split(*argv ,' ');
    }
while(i < argc ){
    printf( "%s\n",argv[i]);
 i++;
}
}
 