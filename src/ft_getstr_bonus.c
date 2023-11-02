/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweizman <aweizman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:07:15 by aweizman          #+#    #+#             */
/*   Updated: 2023/10/23 11:35:28 by aweizman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../include/ft_printf_bonus.h"

void	ft_getstr(char *str, t_printf *cond)
{
	if (str == NULL)
	{
		cond->len += 6;
		ft_putstr_fd("(null)", 1);
		return ;
	}
	cond->len += ft_strlen(str);
	ft_putstr_fd(str, 1);
}

void	ft_getchar(unsigned char c, t_printf *cond)
{
	cond->len++;
	ft_putchar_fd(c, 1);
}
