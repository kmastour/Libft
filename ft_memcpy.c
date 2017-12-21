/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:51:04 by kmastour          #+#    #+#             */
/*   Updated: 2017/12/01 13:49:15 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned char	*destin;
	unsigned char	*source;

	destin = (unsigned char*)dest;
	source = (unsigned char*)src;
	while (n > 0)
	{
		*destin++ = *source++;
		n--;
	}
	return (dest);
}
