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

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char*)dest;
	s = (char*)src;
	if (!dest && !src)
		return (NULL);
	if (s < d)
	{
		d = d + len - 1;
		s = s + len - 1;
		while (len-- > 0)
			*d-- = *s--;
	}
	else
	{
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	return (dest);
}
