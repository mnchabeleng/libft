#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, void *src, int len)
{
	unsigned char	*ft_dest;
	unsigned char 	*ft_src;
	int				i;

	ft_dest = (unsigned char *)dest;
	ft_src = (unsigned char *)src;
	if (ft_dest == ft_src)
		return ((unsigned char *)dest);
	if (ft_dest > ft_src)
	{
		i = len - 1;
		while (i >= 0)
		{
			ft_dest[i] = ft_src[i];
			i--;
		}
	}
	else
	{
		/* memcpy */	
		i = 0;
		while (i < len)
		{
			ft_dest[i] = ft_src[i];
			i++;
		}
	}
	return (ft_dest);
}

int	main(void)
{
	char dest[20] = "Aa Bb Cc Dd Ee Ff";
	char src[20] = "Zz Yy Xx Ww Vv Uu";
	char ft_dest[20] = "Aa Bb Cc Dd Ee Ff";
	char ft_src[20] = "Zz Yy Xx Ww Vv Uu";

	//memmove
	printf("dest[20] = %s, src[20] = %s\n", dest, src);
	memmove(dest, src, 2);
	printf("memmove : dest[20] = %s, src[20] = %s\n", dest, src);
	printf("\n");
	//ft_memmove
	printf("ft_dest[20] = %s, ft_src[20] = %s\n", ft_dest, ft_src);
	ft_memmove(ft_dest, ft_src, 2);
	printf("ft_memmove : ft_dest[20] = %s, ft_src[20] = %s\n", ft_dest, ft_src);
	return (0);
}
