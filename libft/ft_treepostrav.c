/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treepostrav.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:20:20 by shural            #+#    #+#             */
/*   Updated: 2017/11/28 18:20:20 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_treepostrav(t_tree *tree, void (*f)(t_tree *elem))
{
	if (tree)
	{
		ft_treepostrav(tree->left, f);
		ft_treepostrav(tree->right, f);
		f(tree);
	}
}
