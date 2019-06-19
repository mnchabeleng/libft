/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:38:22 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/19 09:51:10 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && j + i < n)
			j++;
		if (needle[j] == '\0')
			return ((char*)haystack + i);
		i++;
	}
	return (0);
}
