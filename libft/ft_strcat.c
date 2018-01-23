/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:48:23 by shural            #+#    #+#             */
/*   Updated: 2017/10/31 17:48:23 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int						i;
	char *restrict			str1;
	const char *restrict	str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (str1[i])
		i++;
	while (*str2)
	{
		str1[i] = *str2;
		i++;
		str2++;
	}
	str1[i] = '\0';
	return (str1);
}
