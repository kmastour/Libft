/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:31:03 by kmastour          #+#    #+#             */
/*   Updated: 2017/12/01 13:58:48 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1pri;
	unsigned char	*s2pri;

	s1pri = (unsigned char*)s1;
	s2pri = (unsigned char*)s2;
	while (n--)
	{
		if (*s1pri != *s2pri)
			return (*s1pri - *s2pri);
		s1pri++;
		s2pri++;
	}
	return (0);
}
