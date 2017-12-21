/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:09:33 by kmastour          #+#    #+#             */
/*   Updated: 2017/11/28 09:52:16 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count(int n)
{
	int		len;

	len = 0;
	if (n <= 0)
		len++;
	while (n >= 1 || n <= -1)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	int				len;

	len = ft_count(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	nbr = (n < 0) ? -n : n;
	if (nbr == 0)
	{
		ft_strdup(str);
		str[0] = '0';
	}
	while (nbr != 0)
	{
		str[len - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
