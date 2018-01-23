/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treedel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:18:42 by shural            #+#    #+#             */
/*   Updated: 2017/11/28 18:18:43 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_treedel(t_tree **t)
{
	if (t)
		if (*t)
		{
			ft_treedel(&((*t)->left));
			ft_treedel(&((*t)->right));
			if ((*t)->content)
				free((*t)->content);
			free(*t);
			*t = NULL;
		}
}