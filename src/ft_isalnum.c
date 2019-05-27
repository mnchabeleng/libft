/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:29:10 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 11:29:13 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	main(void)
{
	int c = ' ';

	//isalnum
	if (isalnum(c))
		printf("isalnum : \"%c\" is alpha numeric\n", c);
	else
		printf("isalnum : \"%c\" is not alpha numeric\n", c);
	//ft_isalnum
	if (ft_isalnum(c))
		printf("ft_isalnum : \"%c\" is alpha numeric\n", c);
	else
		printf("ft_isalnum : \"%c\" is not alpha numeric\n", c);
	return (0);
}
