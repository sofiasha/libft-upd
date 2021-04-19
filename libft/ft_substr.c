/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 21:13:18 by ltanisha          #+#    #+#             */
/*   Updated: 2020/11/17 22:47:06 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s)
		j = ft_strlen(s);
	else
		j = 0;
	if (j < start)
		len = 0;
	if (len > j - start)
		len = j - start;
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	i = 0;
	s = s + start;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
