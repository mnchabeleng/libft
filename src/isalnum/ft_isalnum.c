#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	main(void)
{
	int c = ' ';

	//isalnum
	if (isalnum(c))
		printf("isalnum : \"%c\" is alpha numeric\n", c);
	else
		printf("isalnum : \"%c\" is not alpha numeric\n", c);
	//ft_isalnum
	if (ft_isalnum(c))
		printf("ft_isalnum : \"%c\" is alpha numeric\n", c);
	else
		printf("ft_isalnum : \"%c\" is not alpha numeric\n", c);
	return (0);
}
