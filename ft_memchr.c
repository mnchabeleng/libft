/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:33:01 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 15:56:58 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ft_s;
	unsigned char	ft_c;
	size_t			i;

	ft_s = (unsigned char *)s;
	ft_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ft_s[i] == ft_c)
			return (ft_s + i);
		i++;
	}
	return (0);
}
