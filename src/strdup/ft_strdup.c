#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	int i;
	char *dest;

	i = 1;
	while(s[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * i);
	while(i >= 0)
	{
		dest[i] = s[i];
		i--;
	}
	return dest;
}

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = "Hello Africa!";
	str2 = ft_strdup(str1);
	printf("ft_strdup | str1 : %p -> %s, str2 : %p -> %s\n", (void *)str1, str1, (void *)str2, str2);
	str3 = "Hello World!";
	str4 = strdup(str3);
	printf("strdup | str3 : %p -> %s, str4 : %p -> %s\n", (void *)str3, str3, (void *)str4, str4);
	return (0);
}
