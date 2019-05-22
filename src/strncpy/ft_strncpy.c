#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char str[20];

	ft_strncpy(str, "Hello World!", 1);
	printf("ft_strncpy : %s\n", str);
	return (0);
}
