/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 03:25:22 by shural            #+#    #+#             */
/*   Updated: 2017/10/28 03:25:25 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	res = NULL;
	res = (char*)malloc(sizeof(char) * (i + 1));
	if (res)
		ft_memcpy(res, s1, i + 1);
	return (res);
}
