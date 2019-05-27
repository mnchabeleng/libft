/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:33:34 by mnchabel          #+#    #+#             */
/*   Updated: 2019/05/27 13:24:51 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str_dest;
	unsigned char	*str_src;
	size_t			i;

	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		i++;
	}
	return (str_dest);
}
