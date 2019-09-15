/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:31:32 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/18 14:36:17 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0 && *s != (unsigned char)c)
	{
		--n;
		*d = *s;
		d++;
		s++;
	}
	if (n > 0)
	{
		*d++ = c;
		return ((void*)d);
	}
	else
		return (NULL);
}
