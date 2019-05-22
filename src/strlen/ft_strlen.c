#include <string.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char *str;

	str = "Helloooooooooooooooooooooooo";
	printf("strlen : %zd\n", strlen(str));
	printf("ft_strlen : %d\n", ft_strlen(str));
	return (0);
}
