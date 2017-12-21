/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:01:37 by kmastour          #+#    #+#             */
/*   Updated: 2017/12/01 13:51:21 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destin;
	char	*source;

	destin = (char *)dest;
	source = (char *)src;
	if (destin > source)
	{
		source = source + (n - 1);
		destin = destin + (n - 1);
		while (n--)
			*destin-- = *source--;
		return (dest);
	}
	else
	{
		while (n--)
		{
			*destin = *source;
			destin++;
			source++;
		}
	}
	return (dest);
}
