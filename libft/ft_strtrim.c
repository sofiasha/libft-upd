/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:37:35 by ltanisha          #+#    #+#             */
/*   Updated: 2020/11/17 22:16:40 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(char s, char *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	length;

	i = 0;
	j = 0;
	if (!s1)
		return (res = ft_calloc(1, 1));
	while (s1[i] && (ft_find(s1[i], (char *)set) == 1))
		i++;
	length = ft_strlen(s1) - 1;
	while (length > 0 && (ft_find(s1[length], (char *)set) == 1))
		length--;
	if (!s1[i])
		return (res = ft_calloc(1, 1));
	if (!(res = (char *)malloc((length - i + 2) * sizeof(char))))
		return (NULL);
	while (i < length + 1)
		res[j++] = s1[i++];
	res[j] = '\0';
	return (res);
}
