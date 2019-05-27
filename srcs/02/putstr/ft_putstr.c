/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:32:33 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 16:36:38 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_pustr(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		write(1, s[i], 1);
	return (0);
}

int	main(void)
{
	char *s = "Hello World!";

	ft_putstr(s);
	putchar('\n');
	return (0);
}
