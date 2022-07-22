/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 00:23:11 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:48:07 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
write the received integer to a file 
*/
#include "libft.h"

void	ft_putdigit_fd(int n, int fd)
{
	char	r;
	int		c;

	if (n != 0)
	{
		r = n % 10 + '0';
		c = n / 10;
		ft_putdigit_fd(c, fd);
		ft_putchar_fd(r, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (n == INT_MIN)
		{
			ft_putstr_fd("-2", fd);
			n = 147483648;
		}
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = (-1) * n;
		}
		ft_putdigit_fd(n, fd);
	}	
}
