/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:46:17 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/13 14:28:11 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**ft_s;
	size_t	i;
	size_t	j;
	size_t	len;

	ft_s = ft_memalloc(ft_strlen(s) + 1);
	if (!ft_s)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[len + i] && (s[len + i] != c))
				len++;
			ft_s[j++] = ft_strsub(s, i, len);
			i += len;
		}
	}
	ft_s[j] = 0;
	return (ft_s);
}
