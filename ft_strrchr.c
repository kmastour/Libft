/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:27:27 by kmastour          #+#    #+#             */
/*   Updated: 2017/12/01 14:10:19 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;

	s = (char *)str + ft_strlen(str);
	while (*s != c)
	{
		if (s == str)
		{
			return (NULL);
		}
		s--;
	}
	return (s);
}
