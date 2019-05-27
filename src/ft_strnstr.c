/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:38:22 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 11:38:23 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;

	if (n == 0)
		return ((char *)0);
	i = 0;
	if (needle[i])
		return ((char *)haystack);
	while (haystack[i] && i < n - 1)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return ((char *)0);
}

int	main(void)
{
	const char haystack[50] = "Red Dead Redemption";
	const char needle[25] = "Red";

	//strstr
	printf("strnstr : %s\n", strnstr(haystack, needle, 0));
	//ft_strstr
	printf("ft_strnstr : %s\n", ft_strnstr(haystack, needle, 0));
	return (0);
}
