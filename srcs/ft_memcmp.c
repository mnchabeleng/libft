/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:18:02 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 13:24:14 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
