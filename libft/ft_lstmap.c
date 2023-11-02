/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweizman <aweizman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:05:15 by aweizman          #+#    #+#             */
/*   Updated: 2023/10/11 14:24:56 by aweizman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;
	void	*tmp_cont;

	res = NULL;
	while (lst && f && del)
	{
		tmp_cont = f(lst->content);
		tmp = ft_lstnew(tmp_cont);
		if (!tmp)
		{
			ft_lstclear(&res, del);
			del(tmp_cont);
			return (NULL);
		}
		ft_lstadd_back(&res, tmp);
		lst = lst->next;
	}
	return (res);
}
