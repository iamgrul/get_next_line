/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeintrav.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:53:29 by shural            #+#    #+#             */
/*   Updated: 2017/11/28 16:53:31 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_treeintrav(t_tree *tree, void (*f)(t_tree *elem))
{
	if (tree)
	{
		ft_treeintrav(tree->left, f);
		f(tree);
		ft_treeintrav(tree->right, f);
	}
}
