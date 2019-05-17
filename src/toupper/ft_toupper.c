#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int chr)
{
	if(chr >= 97 && chr <= 122)
		chr = chr - 32;
	return chr;
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
