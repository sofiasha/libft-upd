/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:03:42 by ltanisha          #+#    #+#             */
/*   Updated: 2020/11/17 22:02:54 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr(long n, int fd)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

void			ft_putnbr_fd(int n, int fd)
{
	long	nn;

	nn = n;
	if (n < 0)
	{
		nn = -nn;
		write(fd, "-", 1);
	}
	ft_putnbr(nn, fd);
}
