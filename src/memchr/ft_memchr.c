#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char *ft_s;

	return ft_s;
}

int		main(void)
{
	const char str[] = "ABCDEFGHIJK";
	const char c = 'E';
	char *ret;

	//memchr
	ret = memchr(str, c, strlen(str));
	printf("memchr : sting after '%c' is %s\n", c, ret);
	return (0);
}
