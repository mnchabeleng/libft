/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:50:16 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 11:22:32 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t len;
	size_t i;

	i = 0;
	while (dest[i])
		i++;
	len = i;
	i = 0;
	while (src[i] && (len + i < n - 1))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + i);
}

int	main(void)
{
	char dest[20];
	char str[20];
	size_t n;

        strcpy(dest, "Destination");
        strcpy(str, "String");
        n = strlcat(dest, str, 20);
        printf("strlcat : %s\n", dest);
		printf("%zu\n", n);
        strcpy(dest, "Destination");
        strcpy(str, "String");
        n = ft_strlcat(dest, str, 20);
        printf("ft_strcat : %s\n", dest);
		printf("%zu\n", n);
	return (0);
}
