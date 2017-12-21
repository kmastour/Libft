/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 08:35:07 by kmastour          #+#    #+#             */
/*   Updated: 2017/11/13 10:14:54 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned long	*mem;

	if (!(mem = (unsigned long*)malloc(sizeof(unsigned long) * size)))
		return (NULL);
	if (mem)
	{
		ft_bzero(mem, size);
		return (mem);
	}
	return (NULL);
}
