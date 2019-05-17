#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, int n)
{
	unsigned char *str;
	int i;

	str = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		str[i] = 0;
		i++;
	}
}

int	main(void)
{
	char str[20];

        bzero(str, 1);
        printf("bzero : %s\n", str);
        ft_bzero(str, 1);
        printf("ft_bzero : %s\n", str);
	return (0);
}
