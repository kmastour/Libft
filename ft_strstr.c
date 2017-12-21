/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:31:05 by kmastour          #+#    #+#             */
/*   Updated: 2017/12/01 14:12:52 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *meule, const char *aigu)
{
	int		i;
	int		j;

	i = 0;
	if (aigu[0] == '\0')
		return ((char *)meule);
	else
	{
		while (meule[i])
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
	}
	return (NULL);
}
