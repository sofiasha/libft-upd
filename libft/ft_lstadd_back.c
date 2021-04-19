/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:51:11 by ltanisha          #+#    #+#             */
/*   Updated: 2021/03/06 18:32:38 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *i;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	if ((i = ft_lstlast(*lst)) != NULL)
		i->next = new;
}
