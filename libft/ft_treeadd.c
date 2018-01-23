/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:52:45 by shural            #+#    #+#             */
/*   Updated: 2017/11/28 16:52:45 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_treeadd(t_tree **atree, t_tree *new, int (*fcomp)(t_tree *t1,
					t_tree *t2))
{
	int a;

	if (atree)
	{
		a = fcomp(*atree, new);
		if (a > 0)
		{
			if ((*atree)->right)
				ft_treeadd(&((*atree)->right), new, fcomp);
			else
				(*atree)->right = new;
		}
		else
		{
			if ((*atree)->left)
				ft_treeadd(&((*atree)->left), new, fcomp);
			else
				(*atree)->left = new;
		}
	}
	else
		*atree = new;
}
