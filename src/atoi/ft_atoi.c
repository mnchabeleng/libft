#include <stdio.h>
#include <stdlib.h>

int	ft_is_digit(char chr)
{
	if(chr >= '0' && chr <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = 1;
	i = 0;
	while((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if(str[i] == '-')
		sign = -1;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] != '\0' && ft_is_digit(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

int	main(void)
{
	char *str;
	int i;
	int j;

	str = "                                                                --2a0";
	i = atoi(str);
	j = ft_atoi(str);
	printf("atoi : %d, ft_atoi : %d\n", i, j);
	return (0);

}
