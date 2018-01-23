/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:46:40 by shural            #+#    #+#             */
/*   Updated: 2017/10/31 17:46:49 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
	const void *restrict src, int c, size_t n)
{
	size_t				i;
	unsigned char		*ucdst;
	const unsigned char	*ucsrc;

	i = 0;
	ucdst = dst;
	ucsrc = src;
	while (i < n)
	{
		ucdst[i] = ucsrc[i];
		if (ucsrc[i] == (unsigned char)c)
			return (void*)(ucdst + i + 1);
		i++;
	}
	return (NULL);
}
