/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 20:54:30 by shural            #+#    #+#             */
/*   Updated: 2017/10/27 20:54:31 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr__(long int nb)
{
	if (nb)
	{
		ft_putnbr__(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void			ft_putnbr(int nb)
{
	long int	temp;

	if (nb == 0)
		ft_putchar('0');
	temp = nb;
	if (temp < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	ft_putnbr__(temp);
}
