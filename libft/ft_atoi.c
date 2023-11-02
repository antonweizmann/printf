/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonweizmann <antonweizmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:37:13 by antonweizma       #+#    #+#             */
/*   Updated: 2023/10/08 13:43:25 by antonweizma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	negative;
	int	result;

	negative = 0;
	result = 0;
	while (*str == 32 || *str == 9 || *str == 10
		|| *str == 11 || *str == 12 || *str == 13)
		str++;
	if (*str == 43 || *str == 45)
		if (*str++ == 45)
			negative = 1;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	if (negative == 1)
		result = -result;
	return (result);
}
