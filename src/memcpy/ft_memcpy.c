#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, int n)
{
	unsigned char	*str_dest;
	unsigned char	*str_src;
	int				i;

	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		i++;
	}
	return (str_dest);
}

int	main(void)
{
	char src[20] = "This is 50";
	char dest[20];
	char ft_src[20] = "This is 50";
	char ft_dest[20];

	//memcpy
	strcpy(dest, "Hello World!");
	printf("strcpy : dest[20] = %s\n", dest);
	memcpy(dest, src, strlen(src) + 2);
	printf("memcpy : dest[20] = %s\n", dest);
	//ft_memcpy
	printf("\n");
	strcpy(ft_dest, "Hello World!");
	printf("strcpy : ft_dest[20] = %s\n", ft_dest);
	ft_memcpy(ft_dest, ft_src, strlen(ft_src) + 2);
	printf("ft_memcpy : ft_dest[20] = %s\n", ft_dest);
	return (0);
}
