#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char	*ft_s;
	unsigned char	ft_c;
	int				i;

	ft_s = (unsigned char *)s;
	ft_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ft_s[i] == ft_c)
			return (ft_s + i);
		i++;
	}
	return (0);
}

int		main(void)
{
	const char str[] = "ABCDEFGHIJK";
	const char c = 'J';
	char *ret;
	const char ft_str[] = "ABCDEFGHIJK";
	const char ft_c = 'J';
	char *ft_ret;

	//memchr
	ret = memchr(str, c, strlen(str));
	printf("memchr : sting after '%c' is %s\n", c, ret);
	//ft_memchr
	ft_ret = ft_memchr(ft_str, ft_c, strlen(ft_str));
	printf("ft_memchr : sting after '%c' is %s\n", ft_c, ft_ret);
	return (0);
}
