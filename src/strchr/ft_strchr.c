#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char *ft_s;
	int i;

	ft_s = (unsigned char *)s;
	i = 0;
	while(ft_s[i] != '\0')
	{
		if(ft_s[i] == c)
			return (ft_s + i);
		i++;
	}
	return 0;
}

int	main(void)
{
	const char str[] = "http://www.tutorialspoint.com";
	//const char str[50];
	const char c = ':';
	//const char c;

	//strchr
	printf("strstr : String after %c is %s\n", c, strchr(str, c));
	printf("\n");
	//ft_strchr
	printf("ft_strstr : String after %c is %s\n", c, ft_strchr(str, c));
	return (0);
}
