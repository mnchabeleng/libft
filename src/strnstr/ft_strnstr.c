#include <string.h>
#include <stdio.h>

int		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, int n)
{
	int i;
	int j;
	int len;

	i = 0;
	len = ft_strlen(needle);
	if (len > n)
		return ((char *)0);
	if(needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i < n)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return ((char *)0);
}

int	main(void)
{
	const char haystack[50] = "Red Dead Redemption";
	const char needle[25] = "Dead";

	//strstr
	printf("strnstr : %s\n", strnstr(haystack, needle, 5));
	//ft_strstr
	printf("ft_strnstr : %s\n", ft_strnstr(haystack, needle, 5));
	return (0);
}
