/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:18:58 by kmastour          #+#    #+#             */
/*   Updated: 2017/12/01 13:57:30 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sprime;

	sprime = (unsigned char *)s;
	while (n--)
	{
		if (*sprime == (unsigned char)c)
			return (sprime);
		sprime++;
	}
	return (NULL);
}
