#include "push_swap.h"

// ft_atoi_push(char *str){
// 	int i = 0;
// 	int sign = 1;
// 	int result  = 0;

// while(str[i]== ' ')
// 	str[i++];
// if(str[i] == '+')
// i++;
// else if(str[i] == '-')
// 	i++;
// 	sign *= -1;
// while(str[i]){
// 	if(str[i]>='0' && str[i] <= '9')
// 		res = res*10 +str[i]-'0';
// else {
// 	printf("is not a number\n");
// 	exit(1);
// }
// 	return res*sign;
// if ((sign < 0 && str[i] < (-2147483647)) || (sign == 1 && str[i] > 2147483647)) {
// 	printf("number out of the range\n");
// 	exit(1);
// }
// }






// }

int ft_strlen_push(char **str){
	int	i;

	i = 0;

	while (*str)
	{
		str++;
		i++;
	}

	 printf("%d",i);
	return i;
}

int main(int argc , char *argv[]){
    // t_checker *checker;
	if(argc>1){
		argv++;
		if(argc ==2)
	  argv =  ft_split(*argv, ' ');
		int len =0;
		len = ft_strlen_push(argv);
		printf("len == %d\n",len);
	
	}

}

//     int  *str = malloc(1);
// int i = 1;
//       argv++;
//     if(argc == 2){
//     argv = ft_split(*argv ,' ');
//     }
// while(i < argc ){
  //str[i] = ft_atoi_swap(argv);
//     printf("%d", str[i]);
//  i++;
// }

// }
 