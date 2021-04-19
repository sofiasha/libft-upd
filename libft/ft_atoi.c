/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 01:03:38 by ltanisha          #+#    #+#             */
/*   Updated: 2020/11/01 23:43:05 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if (c && ((c == 32) || ((c >= 9) && (c <= 13))))
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	unsigned int	res;
	unsigned int	last_res;
	int				i;
	int				sign;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		last_res = res;
		res = res * 10 + (unsigned int)(str[i] - 48);
		if (last_res > res)
			return (sign > 0 ? -1 : 0);
		i++;
	}
	return (res * sign);
}
