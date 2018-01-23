/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:17:04 by shural            #+#    #+#             */
/*   Updated: 2017/11/23 13:17:47 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*res;

	res = NULL;
	res = (char*)malloc(sizeof(char) * size);
	if (res)
		while (size)
		{
			res[size - 1] = 0;
			size--;
		}
	return (res);
}
