/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:45:13 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/18 15:47:46 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*ft_s;
	unsigned int	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	ft_s = (char *)malloc(sizeof(*ft_s) * len);
	if (ft_s)
	{
		ft_strcpy(ft_s, s1);
		ft_strcat(ft_s, s2);
		ft_s[len++] = '\0';
		return (ft_s);
	}
	return (0);
}
