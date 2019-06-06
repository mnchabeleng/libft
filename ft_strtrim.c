/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:50:47 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/06 16:35:58 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ft_s;

	ft_s = ft_strchr(s, ' ');
	ft_s = ft_strchr(s, '\n');
	ft_s = ft_strchr(s, '\t');
	ft_s = ft_strrchr(s, ' ');
	ft_s = ft_strrchr(s, '\n');
	ft_s = ft_strrchr(s, '\t');
	return (ft_s);
}
