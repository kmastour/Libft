/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:10:27 by kmastour          #+#    #+#             */
/*   Updated: 2017/12/01 14:14:08 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *meule, const char *aigu, size_t len)
{
	int				i;
	int				j;
	unsigned long	k;

	i = 0;
	k = 0;
	k = ft_strlen(aigu);
	if (aigu[0] == '\0')
		return ((char *)meule);
	while (meule[i] && len-- >= k)
	{
		j = 0;
		while (aigu[j] == meule[i + j])
		{
			if (aigu[j + 1] == '\0')
				return ((char *)&meule[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
