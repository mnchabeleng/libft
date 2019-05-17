#include <string.h>
#include <stdio.h>

size_t	ft_strlen(char *str)
{
in	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

int	main(void)
{
	char *str;

	str = "Helloooooooooooooooooooooooo";
	printf("strlen : %zd\n", strlen(str));
	printf("ft_strlen : %zd\n", ft_strlen(str));
	return (0);
}
