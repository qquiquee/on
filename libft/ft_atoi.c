/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:06:53 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:42:27 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  To convert a string to a number
*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (num * sign > INT_MAX)
			return (-1);
		if (num * sign < INT_MIN)
			return (0);
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}
