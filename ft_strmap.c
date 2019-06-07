/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 15:24:58 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/07 16:00:59 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ft_s;
	size_t	i;

	if (s && f)
	{
		ft_s = ft_strnew(ft_strlen(s));
		i = 0;
		while (s[i])
		{
			ft_s[i] = f(s[i]);
			i++;
		}
		return (ft_s);
	}
	return (0);
}
