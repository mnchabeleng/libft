#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	if (n == 0)
		return ((char *)0);
	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n - 1)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
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
	const char needle[25] = "Red";

	//strstr
	printf("strnstr : %s\n", strnstr(haystack, needle, 0));
	//ft_strstr
	printf("ft_strnstr : %s\n", ft_strnstr(haystack, needle, 0));
	return (0);
}
