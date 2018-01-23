/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:41:09 by shural            #+#    #+#             */
/*   Updated: 2017/11/23 15:41:09 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd__(long int nb, int fd)
{
	if (nb)
	{
		ft_putnbr_fd__(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	long int	temp;

	if (n == 0)
		ft_putchar_fd('0', fd);
	temp = n;
	if (temp < 0)
	{
		ft_putchar_fd('-', fd);
		temp *= -1;
	}
	ft_putnbr_fd__(temp, fd);
}
