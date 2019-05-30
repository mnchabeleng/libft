/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:18:02 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 15:57:24 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ft_s1;
	unsigned char	*ft_s2;
	size_t			i;

	if (s1 == s2 || n <= 0 || (!s1 && !s2 && !n))
		return (0);
	ft_s1 = (unsigned char *)s1;
	ft_s2 = (unsigned char *)s2;
	i = 0;
	if (n > 0)
		while (ft_s1[i] && ft_s2[i] && ft_s1[i] == ft_s2[i] && i < n - 1)
			i++;
	return (ft_s1[i] - ft_s2[i]);
}
