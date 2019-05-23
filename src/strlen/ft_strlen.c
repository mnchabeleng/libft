#include <string.h>
#include <stdio.h>

unsigned int	ft_strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	char *str;

	str = "Hellooo-+ooooooooooooooooooooo";
	printf("strlen : %zd\n", strlen(str));
	printf("ft_strlen : %d\n", ft_strlen(str));
	return (0);
}
