/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:02:49 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 16:02:15 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (s1 && s2 && n > 0)
	{
		i = 0;
		if (n > 1)
			while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
				i++;
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
