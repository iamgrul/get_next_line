/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:40:04 by shural            #+#    #+#             */
/*   Updated: 2017/11/23 15:40:05 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoa__(char **res, long int nb, int i)
{
	if (nb == 0 && i == 0)
		res[0][0] = '-';
	else if (nb)
	{
		ft_itoa__(res, nb / 10, i - 1);
		res[0][i] = nb % 10 + '0';
	}
}

char		*ft_itoa(int n)
{
	char		*res;
	size_t		reslen;
	long int	temp;
	int			i;

	if (n == 0)
		return (ft_strdup("0"));
	i = 0;
	reslen = 0;
	temp = n;
	while (temp != 0)
	{
		reslen++;
		temp /= 10;
	}
	if (n < 0)
		reslen++;
	res = ft_strnew(reslen);
	if (res)
		ft_itoa__(&res, ABS((long int)n), reslen - 1);
	return (res);
}
