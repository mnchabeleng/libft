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
	char	*dest;
	int		i;

	i = 1;
	while (s[i])
		i++;
	dest = (char *)malloc((sizeof(char) * i) + 1);
	if (!dest)
		return (0);
	while (i >= 0)
	{
		dest[i] = s[i];
		i--;
	}
	return (dest);
}
