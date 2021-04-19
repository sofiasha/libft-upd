/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:57:24 by ltanisha          #+#    #+#             */
/*   Updated: 2020/12/08 21:07:04 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int				i;
	char			*s2;

	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

size_t		ft_strlen(const char *s)
{
	size_t			i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char			*s;
	int				i;
	int				j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(s = (char*)malloc(sizeof(char) * (ft_strlen(s1)
						+ ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}

char		*ft_strchr(const char *s, int c)
{
	int				i;
	char			*a;

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

char		*ft_strcpy(char *dst, char *src)
{
	int				i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
