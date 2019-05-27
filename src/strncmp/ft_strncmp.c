/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:02:49 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 11:04:10 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (s1 && s2)
	{
		i = 0;
		while (--n && s1[i] && s2[i] && s1[i] == s2[i])
			i++;
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (-1);
}

int	main(void)
{
	char *s1;
	char *s2;

	s1 = "Red Dead Redemption";
	s2 = "RediD";
	printf("strncmp : %d\n", strncmp(s1, s2, 7));
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, 7));
	return (0);
}
