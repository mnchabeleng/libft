#include <stdio.h>
#include <stdlib.h>

int	ft_is_digit(char chr)
{
	if(chr >= '0' && chr <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = 1;
	i = 0;
	while((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if(nptr[i] == '-')
		sign = -1;
	if(nptr[i] == '-' || nptr[i] == '+')
		i++;
	while(nptr[i] != '\0' && ft_is_digit(nptr[i]))
	{
		res = res * 10 + nptr[i] - '0';
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
