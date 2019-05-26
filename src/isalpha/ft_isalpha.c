#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	main(void)
{
	int c = 'z';

	//isalpha
	if (isalpha(c))
		printf("isalpha : \"%c\" is alpha\n", c);
	else
		printf("isalpha : \"%c\" is not alpha\n", c);
	//ft_isalpha
	if (ft_isalpha(c))
		printf("ft_isalpha : \"%c\" is alpha\n", c);
	else
		printf("isalpha : \"%c\" is not alpha\n", c);
	return (0);
}