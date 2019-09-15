/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:54:33 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 16:03:21 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_position;

	last_position = (0);
	while (*s)
	{
		if (*s == c)
			last_position = (char*)s;
		++s;
	}
	if (last_position)
		return (last_position);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
