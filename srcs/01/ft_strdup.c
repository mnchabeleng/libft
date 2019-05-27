/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:35:39 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 16:00:28 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int	i;

	i = 1;
	while (s[i])
		i++;
	dest = (char *)malloc(sizeof(char) * i);
	while (i >= 0)
	{
		dest[i] = s[i];
		i--;
	}
	return (dest);
}
