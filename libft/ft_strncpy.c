/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 04:10:24 by shural            #+#    #+#             */
/*   Updated: 2017/10/28 04:10:26 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i])
		i++;
	ft_memset(dst, 0, len);
	if (i < len)
		ft_memcpy(dst, src, i);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
