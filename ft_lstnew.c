/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 17:20:34 by mnchabel          #+#    #+#             */
/*   Updated: 2019/06/19 17:34:20 by mnchabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;
	t_list *temp;

	list = 0;
	temp = (t_list *)malloc(size_f(content_size));
	if (temp)
	{
	}
	return (temp);
}
