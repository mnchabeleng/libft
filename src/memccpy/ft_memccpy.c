#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c,int n)
{
	unsigned char *str_dest;
	unsigned char *str_src;
	int i;

	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	i = 0;
	while(i < n)
	{
		str_dest[i] = str_src[i];
		if(str_src[i] == (unsigned char)c)
			return (str_dest + i + 1);
		i++;
	}
	return str_dest;
}

int	main(void)
{
	char src[20] = "This is 50";
	char dest[20];
	char ft_src[20] = "This is 50";
	char ft_dest[20];

	//memccpy
	strcpy(dest, "Hello World!");
	printf("strcpy : dest[20] = %s\n", dest);
	memccpy(dest, src, 'i', strlen(src) + 2);
	printf("memccpy : dest[20] = %s\n", dest);
	//ft_memccpy
	printf("\n");
	strcpy(ft_dest, "Hello World!");
	printf("strcpy : ft_dest[20] = %s\n", ft_dest);
	ft_memccpy(ft_dest, ft_src, 'i', strlen(ft_src) + 2);
	printf("ft_memccpy : ft_dest[20] = %s\n", ft_dest);
	return (0);
}
