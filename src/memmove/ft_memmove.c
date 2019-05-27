/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:33:49 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 11:33:51 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, void *src, size_t len)
{
	unsigned char	*ft_dest;
	unsigned char 	*ft_src;
	size_t			i;

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
