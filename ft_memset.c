/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:33:34 by kmastour          #+#    #+#             */
/*   Updated: 2017/11/17 11:31:32 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bprime;

	bprime = (unsigned char*)b;
	while (len > 0)
	{
		*bprime = (unsigned char)c;
		len--;
		bprime++;
	}
	return (b);
}
