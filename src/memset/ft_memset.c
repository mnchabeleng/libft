#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, int n)
{
	unsigned char *str;
	int i;

	str = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		str[i] = c;
		i++;
	}
	return str;
}

int	main(void)
{
	char str[20];

	memset(str, '*', 20);
	printf("memset : %s\n", str);
	ft_memset(str, '*', 10);
        printf("ft_memset : %s\n", str);
	return (0);
}
