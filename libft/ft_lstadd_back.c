/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweizman <aweizman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:26:59 by aweizman          #+#    #+#             */
/*   Updated: 2023/10/13 14:46:27 by aweizman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_outadd_back(t_out **lst, t_out *new)
{
	t_out	*tmp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_outlast(*lst);
	tmp -> next = new;
}
