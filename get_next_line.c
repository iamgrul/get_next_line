/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shural <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:47:23 by shural            #+#    #+#             */
/*   Updated: 2018/01/15 13:47:25 by shural           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_strcpy_to_n(char *str)
{
	int				i;
	char			*res;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	res = ft_strnew(i);
	while (i--)
		res[i] = str[i];
	return (res);
}

static t_list	*ft_lst_checkfd(t_list **lst, const int fd)
{
	t_list			*res;

	res = *lst;
	while (res)
	{
		if (res->content_size == (size_t)fd)
			return (res);
		res = res->next;
	}
	res = ft_lstnew("\0", fd);
	ft_lstadd(lst, res);
	res = *lst;
	return (res);
}

static void		ft_content_manager(t_list *curlst)
{
	char			*tmp;

	tmp = curlst->content;
	curlst->content = ft_strchr(curlst->content, '\n');
	if (curlst->content)
		curlst->content = ft_strdup((curlst->content) + 1);
	else
		curlst->content = ft_strnew(0);
	free(tmp);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*lst;
	char			*tmp;
	char			buf[BUFF_SIZE + 1];
	int				ret;
	t_list			*curlst;

	ret = 0;
	if (!line || BUFF_SIZE < 1 || fd < 0)
		return (-1);
	curlst = ft_lst_checkfd(&lst, fd);
	if (!ft_strchr(curlst.content, '\n'))
		while ((ret = read(fd, buf, BUFF_SIZE)))
		{
			buf[ret] = '\0';
			tmp = curlst->content;
			curlst->content = ft_strjoin(curlst->content, buf);
			free(tmp);
			if (ft_strchr(curlst->content, '\n'))
				break ;
		}
	if (ret < BUFF_SIZE && !ft_strlen(curlst->content))
		return (0);
	*line = ft_strcpy_to_n(curlst->content);
	ft_content_manager(curlst);
	return (1);
}
