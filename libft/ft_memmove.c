/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:47:06 by shural            #+#    #+#             */
/*   Updated: 2017/10/31 17:47:06 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ucdst;
	const unsigned char	*ucsrc;

	i = 0;
	ucdst = dst;
	ucsrc = src;
	if (dst < src)
		while (i < len)
		{
			ucdst[i] = ucsrc[i];
			i++;
		}
	else
		while (len > 0)
		{
			ucdst[len - 1] = ucsrc[len - 1];
			len--;
		}
	return (dst);
}
