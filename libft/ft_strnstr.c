/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:47:56 by ltanisha          #+#    #+#             */
/*   Updated: 2020/11/17 21:59:52 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_find(const char *chto, const char *gde)
{
	int i;

	i = 0;
	while (chto[i] && gde[i])
	{
		if (chto[i] != gde[i])
			return (0);
		i++;
	}
	if (gde[i] == '\0')
		return (1);
	return (0);
}

char		*ft_strnstr(const char *hstck, const char *ndl, size_t len)
{
	size_t	i;
	int		a;

	i = 0;
	a = len - ft_strlen(ndl) + 1;
	while ((i < len - 1) && (a >= 0))
	{
		if (ft_find((hstck + i), ndl) == 1)
			return ((char *)(hstck + i));
		i++;
		a--;
	}
	return (0);
}
