/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:41:49 by kmastour          #+#    #+#             */
/*   Updated: 2017/12/05 10:26:03 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	char		*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int			ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(const char *src)
{
	char	*cpy;
	int		len;

	len = ft_strlen(src);
	if (!(cpy = (char*)malloc(sizeof(*src) * (len + 1))))
		return (NULL);
	ft_strcpy(cpy, src);
	return (cpy);
}
