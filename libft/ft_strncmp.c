/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 04:08:20 by shural            #+#    #+#             */
/*   Updated: 2017/10/28 04:08:21 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && i < n)
	{
		if (!s1[i] || !s2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
}
