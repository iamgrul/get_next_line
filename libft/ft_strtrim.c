/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:39:45 by shural            #+#    #+#             */
/*   Updated: 2017/11/23 15:39:47 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	begin;
	size_t	end;
	char	*res;

	res = NULL;
	if (s)
	{
		begin = 0;
		end = ft_strlen((char*)s) - 1;
		while ((s[begin] == ' ' || s[begin] == '\n' || s[begin] == '\t') &&
				s[begin])
			begin++;
		while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && end)
			end--;
		if (begin < end)
			res = ft_strsub(s, begin, end - begin + 1);
		else
			res = ft_strnew(0);
	}
	return (res);
}
