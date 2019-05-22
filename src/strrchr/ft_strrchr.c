#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ft_s;
	int		i;

	ft_s = (char *)s;
	i = 0;
	while (ft_s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (ft_s[i] == c)
			return (ft_s + i);
		i--;
	}
	return (0);
}

int	main(void)
{
	int len;
	const char str[] = "http://www.tutorialspoint.com";
	const char c = ':';

	//strrchr
	printf("strrchr : String after \"%c\" is \"%s\".\n", c, strrchr(str, c));
	//ft_strrchr
	printf("ft_strrchr : String after \"%c\" is \"%s\".\n", c, ft_strrchr(str, c));
	return (0);
}
