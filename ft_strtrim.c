/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:50:47 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/08 16:59:34 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ft_s;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	i = 0;
	j = ft_strlen(s);
	while ((s[i] >= '\t' && s[i] <= '\r') || s[i] == 32)
		i++;
	while ((s[j - 1] >= '\t' && s[j - 1] <= '\r') || s[j - 1] == 32)
		j--;
	ft_s = ft_strsub(s, i, j);
	return (ft_s);
}
