/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:52:32 by ltanisha          #+#    #+#             */
/*   Updated: 2021/03/07 19:24:51 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char *i;

	i = NULL;
	if (!(i = (char*)malloc(sizeof(*i) * (count * size))))
		return (NULL);
	ft_bzero(i, count * size);
	return (i);
}
