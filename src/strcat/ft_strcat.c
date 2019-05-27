/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:34:22 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 11:34:23 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
	size_t dest_len;
	size_t i;

	i = 0;
	while (dest[i])
		i++;
	dest_len = i;
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[20];
	char str[20];

	strcpy(dest, "Destination");
	strcpy(str, "String");
	strcat(dest, str);
	printf("strcat : %s\n", dest);
	strcpy(dest, "FT_Destination");
	strcpy(str, "FT_String");
	ft_strcat(dest, str);
	printf("ft_strcat : %s\n", dest);
	return (0);
}
