#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

int	main(void)
{
	int n;
	char c;

	n = 100;
	c = 'a';
	printf("toupper : %c\n", toupper(n));
	printf("ft_toupper : %c\n", ft_toupper(n));
	printf("toupper : %c\n", toupper(c));
        printf("ft_toupper : %c\n", ft_toupper(c));
	return (0);
}
