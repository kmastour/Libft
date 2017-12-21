/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 10:20:57 by kmastour          #+#    #+#             */
/*   Updated: 2017/11/28 10:22:34 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static size_t	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_s;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	if ((new_s = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_s[i] = f(s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
