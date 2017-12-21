/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:12:03 by kmastour          #+#    #+#             */
/*   Updated: 2017/11/27 15:13:13 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trim;
	int		i;
	int		a;
	int		end;
	int		diff;

	i = 0;
	a = 0;
	if (s == NULL)
		return (NULL);
	while (s[a] && (s[a] == ' ' || s[a] == '\t' || s[a] == '\n'))
		a++;
	end = ft_strlen(s) - 1;
	while (s[end] && (s[end] == ' ' || s[end] == '\t' || s[end] == '\n'))
		end--;
	diff = (end < a ? 1 : end - a + 1);
	if ((trim = (char*)malloc(sizeof(char) * (diff + 1))) == NULL)
		return (NULL);
	while (a <= end)
	{
		trim[i++] = s[a];
		a++;
	}
	trim[i] = '\0';
	return (trim);
}
