/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:50:16 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/07 14:08:37 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		len;
	size_t		d_len;

	d = dest;
	s = src;
	len = n;
	while (len-- != 0 && *d != '\0')
		d++;
	d_len = d - dest;
	len = n - d_len;
	if (len == 0)
		return (d_len + ft_strlen(s));
	while (*s != '\0')
	{
		if (len != 1)
		{
			*d++ = *s;
			len--;
		}
		s++;
	}
	*d = '\0';
	return (d_len + (s - src));
}
