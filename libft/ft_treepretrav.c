/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treepretrav.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:53:04 by shural            #+#    #+#             */
/*   Updated: 2017/11/28 16:53:05 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_treepretrav(t_tree *tree, void (*f)(t_tree *elem))
{
	if (tree)
	{
		f(tree);
		ft_treepretrav(tree->left, f);
		ft_treepretrav(tree->right, f);
	}
}
