/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:39:56 by shural            #+#    #+#             */
/*   Updated: 2017/11/23 15:39:57 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	words;
	char	**res;

	i = 0;
	words = ft_strwords((char*)s, c);
	res = ft_memalloc((words + 1) * sizeof(char*));
	if (res)
		while (i < words)
		{
			while (*s == c)
				s++;
			if (ft_strchr(s, c))
				res[i] = ft_strsub(s, 0, ft_strchr(s, c) - s);
			else
				res[i] = ft_strsub(s, 0, ft_strchr(s, '\0') - s);
			if (!res)
				ft_fda((void***)&res, words);
			s = ft_strchr(s, c);
			i++;
		}
	return (res);
}
