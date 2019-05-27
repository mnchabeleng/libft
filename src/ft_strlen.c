/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:21:02 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 10:23:16 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	char *str;

	str = "Hellooo-+ooooooooooooooooooooo";
	printf("strlen : %zd\n", strlen(str));
	printf("ft_strlen : %d\n", ft_strlen(str));
	return (0);
}
