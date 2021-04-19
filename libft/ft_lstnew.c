/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:54:52 by ltanisha          #+#    #+#             */
/*   Updated: 2021/03/06 18:29:25 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*i;

	if (!(i = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	i->content = content;
	i->next = NULL;
	return (i);
}
