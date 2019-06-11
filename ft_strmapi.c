/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:03:41 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/11 16:43:31 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ft_s;
	unsigned int	i;

	if (s && f)
	{
		ft_s = ft_strnew(ft_strlen(s));
		if (!ft_s)
			return (0);
		i = 0;
		while (s[i])
		{
			ft_s[i] = f(i, s[i]);
			i++;
		}
		return (ft_s);
	}
	return (0);
}
