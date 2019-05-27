/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:29:57 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 11:29:59 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
		return (1);
	return (0);
}

int	main(void)
{
	int c = 100;

	//isascii
	if (isascii(c))
		printf("iascii : char = \"%c\" is ascii\n", c);
	else
		printf("iascii : char = \"%c\" is not ascii\n", c);
	//ft_isascii
	if (ft_isascii(c))
		printf("ft_iascii : char = \"%c\" is ascii\n", c);
	else
		printf("ft_iascii : char = \"%c\" is not ascii\n", c);
	return (0);
}
