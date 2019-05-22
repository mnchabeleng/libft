#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	
	i = 0;
	if (needle[i] == '\0')
		return (char *)haystack;
	while (haystack[i] != '\0')
	{
		j = 0;
		while(haystack[i + j] == needle[j])
		{
			if(needle[i] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return 0;
}

int	main(void)
{
	const char haystack[50] = "HelloWolrdHelloWorldHello";
	const char needle[10] = "World";

	//strstr
	printf("strstr : %s\n", strstr(haystack, needle));
	//ft_strstr
	printf("ft_strstr : %s\n", ft_strstr(haystack, needle));
	return (0);
}
