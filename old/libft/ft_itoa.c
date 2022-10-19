/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:03:42 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:20 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	 Receives an integer and returns it converted to a string 
*/
#include "libft.h"

int	ft_intl(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n > 0 || n < 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	long int	n_long;
	char		*p;

	len = ft_intl(n);
	n_long = n;
	if (n_long < 0)
	{
		len++;
		n_long = -n_long;
	}
	p = (char *)ft_calloc(len + 1, 1);
	if (p == 0)
		return (0);
	while (len > 0)
	{
		p[len - 1] = (n_long % 10) + '0';
		n_long = n_long / 10;
		len--;
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}
