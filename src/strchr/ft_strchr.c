#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return 0;
}

int	main(void)
{
	const char str[] = "http://www.tutorialspoint.com";
	//const char str[50];
	const char c = 't';
	//const char c;

	//strchr
	printf("strstr : String after %c is %s\n", c, strchr(str, c));
	printf("\n");
	//ft_strchr
	printf("ft_strstr : String after %c is %s\n", c, ft_strchr(str, c));
	return (0);
}
