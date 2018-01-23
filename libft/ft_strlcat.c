/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 04:10:07 by shural            #+#    #+#             */
/*   Updated: 2017/10/31 17:50:44 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t					i;
	size_t					dststartsize;
	size_t					srcstarsize;
	char *restrict			str1;
	const char *restrict	str2;

	i = 0;
	dststartsize = ft_strlen((char*)dst);
	srcstarsize = ft_strlen((char*)src);
	str1 = dst;
	str2 = src;
	while (str1[i])
		i++;
	if (i > dstsize)
		return (srcstarsize + dstsize);
	while (*str2 && dstsize > i + 1)
	{
		str1[i] = *str2;
		i++;
		str2++;
	}
	str1[i] = '\0';
	return (srcstarsize + dststartsize);
}
