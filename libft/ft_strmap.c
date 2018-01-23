/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:38:48 by shural            #+#    #+#             */
/*   Updated: 2017/11/23 15:38:51 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
				res[i] = f((char)s[i]);
	}
	return (res);
}
