#include <string.h>
#include <stdio.h>

char	*ft_strlcat(char *dest, const char *src, int n)
{
	int len;
	int i;

	i = 0;
	while (dest[i])
		i++;
	len = i;
	i = 0;
	while (src[i] && (len + i < n - 1))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[20];
	char str[20];

        strcpy(dest, "Destination");
        strcpy(str, "String");
        strlcat(dest, str, 20);
        printf("strlcat : %s\n", dest);
        strcpy(dest, "Destination");
        strcpy(str, "String");
        ft_strlcat(dest, str, 20);
        printf("ft_strcat : %s\n", dest);
	return (0);
}
