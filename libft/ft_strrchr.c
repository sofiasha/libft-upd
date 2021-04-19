/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:53:51 by ltanisha          #+#    #+#             */
/*   Updated: 2020/11/03 19:42:54 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	a = (char*)s;
	i = ft_strlen(a);
	while (i >= 0)
	{
		if (a[i] == (char)c)
			return (&(a[i]));
		i--;
	}
	return (NULL);
}
