/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 17:20:34 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/20 15:36:48 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	if (!(list = (t_list *)malloc(sizeof(size_t) * content_size)))
		return (0);
	if (!content)
	{
		list->content = 0;
		list->content_size = 0;
	}
	else
	{
		if (!(list->content = (t_list *)malloc(sizeof(size_t) * content_size)))
			return (0);
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	list->next = 0;
	return (list);
}
