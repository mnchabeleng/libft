#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char str[25];

	strcpy(str, "Helloooooo");
	printf("strcpy : %s\n", str);
	//ft_strcpy(str, "Hurryyyy");
	//printf("ft_strcpy : %s\n", str);
	return (0);
}
