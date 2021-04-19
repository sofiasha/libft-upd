/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:09:27 by ltanisha          #+#    #+#             */
/*   Updated: 2020/11/06 20:01:05 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t a;
	size_t b;

	i = 0;
	a = 0;
	while (dst[i])
		i++;
	b = i;
	if (dstsize > i)
		while (src[a] && dstsize - i > 1)
			dst[i++] = src[a++];
	dst[i] = '\0';
	while (src[a])
		a++;
	return ((b < dstsize ? b : dstsize) + a);
}
