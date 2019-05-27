/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:18:02 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 10:18:13 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ft_s1;
	unsigned char	*ft_s2;
	size_t			i;

	if (s1 == s2 || n == 0 || (!s1 && !s2 && !n))
		return (0);
	ft_s1 = (unsigned char *)s1;
	ft_s2 = (unsigned char *)s2;
	i = 0;
	while (ft_s1[i] && ft_s2[i] && ft_s1[i] == ft_s2[i] && i < n)
		i++;
	return (ft_s1[i] - ft_s2[i]);
}

int	main(void)
{
	char str1[25];
	char str2[25];
	char ft_str1[25];
	char ft_str2[25];
	char ret;

	//memcmp
	memcpy(str1, "abc", 6);
	memcpy(str2, "ABC", 6);
	ret = memcmp(str1, str2, 0);
	printf("str1 = %s, str2 = %s\n", str1, str2);
	if(ret > 0)
		printf("str2 is less than str1.\n");
	else if(ret < 0)
		printf("str1 is less than str2.\n");
	else
		printf("str1 is equal to str2.\n");
	printf("\n");
	//ft_memcmp
	memcpy(ft_str1, "abc", 6);
	memcpy(ft_str2, "ABC", 6);
	ret = ft_memcmp(ft_str1, ft_str2, 0);
	printf("ft_str1 = %s, ft_str2 = %s\n", ft_str1, ft_str2);
	if(ret > 0)
		printf("ft_str2 is less than ft_str1\n");
	else if(ret < 0)
		printf("ft_str1 is less than ft_str2\n");
	else
		printf("ft_str1 is equal to ft_str2\n");
	return (0);
}
