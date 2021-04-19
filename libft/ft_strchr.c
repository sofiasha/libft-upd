/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:51:37 by ltanisha          #+#    #+#             */
/*   Updated: 2020/11/02 20:51:06 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*a;

	a = (char*)s;
	i = 0;
	while (a[i])
	{
		if (a[i] == (char)c)
			return (&(a[i]));
		i++;
	}
	if (c == '\0')
		return (&(a[i]));
	return (NULL);
}
