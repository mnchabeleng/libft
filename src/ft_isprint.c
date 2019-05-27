/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:31:01 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 11:31:05 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}

int	main(void)
{
	int c = 'A';

	//isprint
	if (isprint(c))
		printf("isprint : \"%c\" can be printed\n", c);
	else
		printf("isprint : can not be printed\n");
	//ft_isprint
	if (ft_isprint(c))
		printf("ft_isprint : \"%c\" can be printed\n", c);
	else
		printf("ft_isprint : can not be printed\n");
	return (0);
}
