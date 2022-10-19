/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:19:40 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:48:30 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Compare two strings and return the distance (ASCII) of the difference 
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	while (n && (*ps1 != '\0') && (*ps2 != '\0'))
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		ps1++;
		ps2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*ps1 - *ps2);
}
