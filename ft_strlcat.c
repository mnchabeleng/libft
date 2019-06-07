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
	size_t len;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	len = ft_strlen(src);
	while (dest[i] && i < n)
		i++;
	while (src[j] && i + j + 1 < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != n)
		dest[i + j] = '\0';
	return (len + i);
}
