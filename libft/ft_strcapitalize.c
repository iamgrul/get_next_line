/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:52:21 by shural            #+#    #+#             */
/*   Updated: 2017/11/28 16:52:23 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *s)
{
	char	*res;
	int		newword;

	res = s;
	newword = 1;
	if (res)
	{
		res = ft_strtolower(res);
		while (*res)
		{
			if (ft_isalpha(*res) && newword)
			{
				*res = ft_toupper(*res);
				newword = 0;
			}
			else if (!(ft_isalnum(*res)))
				newword = 1;
			res++;
		}
	}
	return (s);
}
