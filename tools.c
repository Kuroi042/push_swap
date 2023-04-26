#include "push_swap.h"
char	*ft_strjoinpush(char *s1, char *s2)
{
	size_t	i;
	char	*p;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlenget(s1);
	len_s2 = ft_strlenget(s2);
	i = 0;
	p = (char *)ft_callocget(((len_s1 + len_s2) + 1), sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < len_s1)
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= len_s2)
	{
		p[i + len_s1] = s2[i];
		i++;
	}
	free(s1);
	return (p);
}

void	*ft_callocget(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	while (i < (count * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

size_t	ft_strlenget(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	ft_atoi_push(char *str)
{
	size_t	i;
	int		sign;
	long		nbr;

	nbr = 0;
	sign = 1;
	i = 0;
	while ( *str == ' ' )
		str++;
	if (str[i] == '-' && str[i+1] != ' ')
	{
		i++;
		sign = sign * -1;
	}
	else if (str[i] == '+' &&  str[i+1] != ' ')
		i++;
  while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            int digit = str[i] - '0';
            nbr = nbr * 10 + digit;
            if ((sign * nbr) > INT_MAX || (sign * nbr) < INT_MIN) {
					write(2,"Error\n",6);
	                exit(1);
            }
        } else {
            write(2,"Error\n",6);
            exit(1);
        }
        i++;
    }

	return (nbr * sign);
}