/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:33:49 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 15:58:05 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*ft_dest;
	unsigned char	*ft_src;
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
		ft_memcpy(ft_dest, ft_src, len);
	}
	return (ft_dest);
}
