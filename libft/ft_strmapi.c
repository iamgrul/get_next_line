/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:39:03 by shural            #+#    #+#             */
/*   Updated: 2017/11/23 15:39:04 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	res = NULL;
	if (s)
	{
		i = ft_strlen((char*)s);
		res = ft_strnew(i);
		if (res)
			while (i--)
				res[i] = f(i, (char)s[i]);
	}
	return (res);
}
