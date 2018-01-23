/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 18:01:40 by shural            #+#    #+#             */
/*   Updated: 2017/11/27 18:01:41 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;

	newlst = NULL;
	if (lst)
	{
		newlst = f(lst);
		if (newlst)
		{
			if (lst->next)
			{
				newlst->next = ft_lstmap(lst->next, f);
			}
			else
				newlst->next = NULL;
			if (lst->next && !(newlst->next))
			{
				free(newlst->content);
				free(newlst);
				newlst = NULL;
			}
		}
	}
	return (newlst);
}
