#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	int v1 = 'q';
	int v2 = '2';

	//isdigit
	if (isdigit(v1))
		printf("isdigit : \"%c\" is a digit\n", v1);
	else
		printf("isdigit : \"%c\" is not a digit\n", v1);
	if (isdigit(v2))
		printf("isdigit : \"%c\" is a digit\n", v2);
	else
		printf("isdigit : \"%c\" is not a digit\n", v2);
	//ft_isdigit
	if (ft_isdigit(v1))
		printf("ft_isdigit : \"%c\" is a digit\n", v1);
	else
		printf("ft_isdigit : \"%c\" is not a digit\n", v1);
	if (isdigit(v2))
		printf("ft_isdigit : \"%c\" is a digit\n", v2);
	else
		printf("ft_isdigit : \"%c\" is not a digit\n", v2);
	return (0);
}
