#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[20];
	char str[20];

	strcpy(dest, "Destination");
	strcpy(str, "String");
	strncat(dest, str, 3);
	printf("strncat : %s\n", dest);
	strcpy(dest, "FT_Destination");
	strcpy(str, "FT_String");
	ft_strncat(dest, str, 9);
	printf("ft_strncat : %s\n", dest);
	return (0);
}
