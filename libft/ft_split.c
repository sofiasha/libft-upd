/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 19:30:28 by ltanisha          #+#    #+#             */
/*   Updated: 2020/11/19 21:12:57 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(char const *str, char sep)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (str[0] != sep)
		count++;
	while (str[i])
	{
		if (str[i] == sep)
		{
			while (str[i] == sep)
				i++;
			if (str[i])
				count++;
		}
		if (str[i])
			i++;
	}
	return (count);
}

static int	ft_count_wlen(char const *str, char sep)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] && str[i] != sep)
	{
		count++;
		i++;
	}
	return (count);
}

char		**ft_clean(char **arr, int numtoclean)
{
	int i;

	if (arr)
	{
		i = 0;
		while (i < numtoclean)
			if (arr[i])
				free(arr[i++]);
		free(arr);
	}
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		linecolumnnum[2];
	char	**a;

	i = 0;
	if (!s)
		return (0);
	linecolumnnum[0] = ft_wcount(s, c);
	if (!(a = (char **)malloc((linecolumnnum[0] + 1) * sizeof(char *))))
		return (0);
	while (i < linecolumnnum[0] && *s)
	{
		while (*s == c)
			s++;
		linecolumnnum[1] = ft_count_wlen(s, c);
		if (!(a[i] = (char *)malloc((linecolumnnum[1] + 1) * sizeof(char))))
			return (ft_clean(a, i));
		j = 0;
		while (j < linecolumnnum[1] && *s)
			a[i][j++] = *(s++);
		a[i++][j] = '\0';
	}
	a[i] = 0;
	return (a);
}
