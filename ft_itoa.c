/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:32:00 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/11 15:44:24 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char	temp;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	while (len > 0)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
		len--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*res;
	int	sign;
	int	i;

	if (n == 0)
		return (0);
	if (n == -2147483648)
		return ((char *)"-2147483648");
	if (n < 0)
		sign = -1;
	res = ft_strnew(12);
	if (!res)
		return (0);	
	i = 0;
	while (n > 0)
	{
		res[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	if (sign)
		res[i++] = '-';
	return (ft_strrev(res));
}
