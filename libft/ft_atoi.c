/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 04:08:06 by shural            #+#    #+#             */
/*   Updated: 2017/10/28 04:08:08 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int						pos_neg;
	unsigned long long int	res;

	pos_neg = 1;
	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\f' ||
		*str == '\r' || *str == '\n')
		str++;
	if (*str == '-')
		pos_neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str <= '9' && *str >= '0')
	{
		if (res >= 9223372036854775807 && pos_neg == 1)
			return (-1);
		if (res >= 9223372036854775807 && pos_neg == -1)
			return (0);
		res = res * 10 + (*str - '0');
		str++;
	}
	return (pos_neg * (int)res);
}
