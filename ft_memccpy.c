/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:31:32 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 15:56:04 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ft_dest;
	unsigned char	*ft_src;
	size_t			i;

	if (dest == src || n <= 0)
		return ((void *)dest);
	ft_dest = (unsigned char *)dest;
	ft_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ft_dest[i] = ft_src[i];
		if (ft_src[i] == (unsigned char)c)
			return ((void *)ft_dest + i + 1);
		i++;
	}
	return ((void *)0);
}
