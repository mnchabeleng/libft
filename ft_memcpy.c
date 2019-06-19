/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:33:34 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/18 14:32:44 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ft_dest;
	unsigned char	*ft_src;
	size_t			i;

	if (!n || dest == src)
		return (dest);
	ft_dest = (unsigned char *)dest;
	ft_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ft_dest[i] = ft_src[i];
		i++;
	}
	return (dest);
}
