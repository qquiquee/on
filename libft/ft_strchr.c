/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 00:46:29 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:48:15 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Returns a pointer to the first occurrence of a character in a string 
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ps;

	ps = (char *)s;
	while (*ps != '\0')
	{
		if (*ps == (char)c)
			return (ps);
		ps++;
	}
	if (c == '\0')
		return (ps);
	return (0);
}
