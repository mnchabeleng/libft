/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:35:39 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/18 14:53:27 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dup)
	{
		i = 0;
		while (s[i])
		{
			dup[i] = s[i];
			i++;
		}
		dup[i] = '\0';
		return (dup);
	}
	return (0);
}
