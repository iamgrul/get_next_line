/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:07:02 by shural            #+#    #+#             */
/*   Updated: 2017/11/23 18:07:03 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strwords(char *s, char del)
{
	size_t	res;

	res = 0;
	if (s)
		while (*s)
		{
			while (*s == del)
				s++;
			if (*s != del && *s)
				res++;
			while (*s != del && *s)
				s++;
		}
	return (res);
}
