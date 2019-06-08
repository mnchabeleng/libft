/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:50:47 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/08 13:44:00 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ft_s;
	size_t	i;

	if (s && start && len)
	{
		ft_s = ft_strnew(len);
		i = 0;
		while (s[start] && i < len)
		{
			ft_s[i] = s[start];
			start++;
			i++;
		}
		ft_s[i] = '\0';
		return (ft_s);
	}
	return (0);
}
