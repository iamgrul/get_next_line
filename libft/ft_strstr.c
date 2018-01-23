/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 04:08:55 by shural            #+#    #+#             */
/*   Updated: 2017/10/28 04:08:56 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		hlen;
	int		nlen;

	i = 0;
	hlen = ft_strlen((char *)haystack);
	nlen = ft_strlen((char *)needle);
	while (i <= hlen - nlen)
	{
		if (ft_strncmp((char *)haystack + i, (char *)needle, nlen) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
