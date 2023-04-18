int	ft_check_empty(char *numbers)
{
	int	i;

	i = 0;
	if (numbers[0] == '\0')
		ft_error();
	while (numbers[i])
	{
		if (numbers[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
int	ft_isalpha_c(char n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
		return (1);
	else
		return (0);
}
int	ft_check_double(char **numbers)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (numbers[i])
	{
		j = i + 1;
		while (numbers[j])
		{
			if (ft_atoi(numbers[i]) == ft_atoi(numbers[j]))
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}
void check(){




    
}