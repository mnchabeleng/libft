/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:46:17 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/10 16:57:21 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(const char *s, char c)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (*s)
	{
		if (temp == 1 && *s == c)
			temp = 0;
		if (temp == 0 && *s != c)
		{
			temp = 1;
			i++;
		}
		s++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char		**ft_s;
	unsigned int 	i;
	unsigned int 	j;
	unsigned int 	len;
	unsigned int	start;


	if (!s || !c)
		return (0);
	len = ft_word_count(s, c) + 1;
	ft_s = (char)malloc(sizeof(**ft_s) * len);
	i = 0;
	j = -1;
	while (++j < len)
	{
		while (is[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		ft_s[i] = ft_strsub(s, start, i - start);
		i++;
	}
	ft_s[j] = 0;
	return (ft_s);
}
