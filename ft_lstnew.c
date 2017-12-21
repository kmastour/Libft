/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 13:28:19 by kmastour          #+#    #+#             */
/*   Updated: 2017/11/27 12:05:58 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*listcontent;

	if (!(listcontent = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		listcontent->content = malloc(content_size);
		if (!listcontent->content)
			return (NULL);
		ft_memmove(listcontent->content, content, content_size);
		listcontent->content_size = content_size;
	}
	else
	{
		listcontent->content = NULL;
		listcontent->content_size = 0;
	}
	listcontent->next = NULL;
	return (listcontent);
}
