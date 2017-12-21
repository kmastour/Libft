/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:29:20 by kmastour          #+#    #+#             */
/*   Updated: 2017/11/28 11:01:01 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;

	i = 0;
	if (s == NULL || s[start] == '\0')
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (str)
	{
		while (i < len && s[start])
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
