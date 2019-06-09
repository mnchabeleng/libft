/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:50:47 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/09 15:36:29 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	i = 0;
	j = ft_strlen(s);
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (i < j && (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t'))
		j--;
	if (i == j)
		return (ft_strnew(1));
	return (ft_strsub(s, i, j - i));
}
