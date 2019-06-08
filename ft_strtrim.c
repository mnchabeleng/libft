/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:50:47 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/08 15:31:06 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ft_s;
	size_t	i;
	size_t	j;

	if (s)
	{
		i = 0;
		j = ft_strlen(s);
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		ft_s = ft_strsub(s, i, j);
		return (ft_s);
	}
	return (0);
}
