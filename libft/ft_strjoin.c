/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:39:36 by shural            #+#    #+#             */
/*   Updated: 2017/11/23 15:39:37 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	res = NULL;
	if (s1 && s2)
	{
		res = ft_strnew(ft_strlen((char*)s1) + ft_strlen((char*)s2));
		if (res)
		{
			ft_strcat(res, s1);
			ft_strcat(res, s2);
		}
	}
	return (res);
}
