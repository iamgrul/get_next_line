/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 04:08:37 by shural            #+#    #+#             */
/*   Updated: 2017/10/28 04:08:38 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	hlen;
	size_t	nlen;

	nlen = ft_strlen((char *)needle);
	if (nlen == 0)
		return (char*)(haystack);
	i = 0;
	hlen = ft_strlen((char *)haystack);
	while (i <= hlen - nlen && i < len && i <= len - nlen && nlen <= len
			&& haystack[i])
	{
		if (ft_strncmp((char *)haystack + i, (char *)needle, nlen) == 0)
			return (char *)(haystack + i);
		i++;
	}
	return (NULL);
}
