/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:32:33 by kmastour          #+#    #+#             */
/*   Updated: 2017/12/01 14:18:25 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dest, const void *restrict src,
					int c, size_t n)
{
	unsigned char	*destin;
	unsigned char	*source;

	destin = (unsigned char*)dest;
	source = (unsigned char*)src;
	while (n--)
	{
		*destin = *source;
		if ((unsigned char)c == *source)
		{
			destin++;
			return (destin);
		}
		destin++;
		source++;
	}
	return (NULL);
}
