/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:03:13 by kmastour          #+#    #+#             */
/*   Updated: 2017/11/28 10:55:55 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char*) * ft_strlen(s1)
		+ ft_strlen(s2) + 1)))
		return (NULL);
	while (s1 && s2)
	{
		if (str)
		{
			str = ft_strcpy(str, s1);
			str = ft_strcat(str, s2);
		}
		return (str);
	}
	return (NULL);
}
