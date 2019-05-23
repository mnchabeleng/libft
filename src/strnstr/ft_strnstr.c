#include <string.h>
#include <stdio.h>

unsigned int	ft_strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	if (s1 && s2)
	{
		if (n == 0)
			return (0);
		while (--n && *s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (-1);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	len;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		if (ft_strncmp(haystack, needle, len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int n)
{
	unsigned int len;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	if (len > n)
		return (0);
	while (n-- && *haystack)
	{
		if (ft_strncmp(haystack, needle, len) == 0)
			return (char *)haystack;
		haystack++;
	}
	return (0);
}

int	main(void)
{
	const char haystack[50] = "Red Dead Redemption";
	const char needle[25] = "Dead";

	//strstr
	printf("strstr : %s\n", strstr(haystack, needle));
	//ft_strstr
	printf("ft_strnstr : %s\n", ft_strnstr(haystack, needle, 5));
	return (0);
}
