/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 09:46:11 by kmastour          #+#    #+#             */
/*   Updated: 2017/11/21 17:02:37 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (str)
	{
		ft_bzero(str, size + 1);
		return (str);
	}
	return (NULL);
}
