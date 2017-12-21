/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmastour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:54:20 by kmastour          #+#    #+#             */
/*   Updated: 2017/12/01 13:44:53 by kmastour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int					i;
	long long			res;
	int					signe;

	i = 0;
	res = 0;
	signe = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		signe = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res > 9223372036854775807)
		return (-1);
	return (signe * res);
}
