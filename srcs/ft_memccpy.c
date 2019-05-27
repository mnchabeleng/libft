/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:31:32 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 14:47:56 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ft_dest;
	unsigned char	*ft_src;
	size_t			i;

	ft_dest = (unsigned char *)dest;
	ft_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ft_dest[i] = ft_src[i];
		if (ft_src[i] == (unsigned char)c)
			return (ft_dest + i + 1);
		i++;
	}
	return (ft_dest);
}
