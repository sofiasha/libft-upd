/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:46:38 by ltanisha          #+#    #+#             */
/*   Updated: 2020/11/18 20:44:08 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(long ch)
{
	int		i;

	i = 0;
	while (ch > 0)
	{
		i++;
		ch = ch / 10;
	}
	return (i);
}

static char		*ft_createstr(char *str, int i, long lnum, int znak)
{
	str[--i] = '\0';
	if (lnum == 0)
	{
		str[--i] = '0';
		return (str);
	}
	while (i > 0)
	{
		str[--i] = lnum % 10 + '0';
		lnum = lnum / 10;
	}
	if (znak < 0)
		str[i] = '-';
	return (str);
}

char			*ft_itoa(int n)
{
	int		i;
	int		znak;
	char	*str;
	long	ch;
	long	lnum;

	znak = 1;
	i = 0;
	lnum = n;
	if (lnum <= 0)
	{
		i++;
		znak = -znak;
		lnum = -lnum;
	}
	ch = lnum;
	i = i + ft_len(ch);
	if (!(str = (char *)malloc((++i) * sizeof(char))))
		return (NULL);
	return (str = ft_createstr(str, i, lnum, znak));
}
