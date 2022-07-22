/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:21:47 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:43:09 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns the string received with the first n positions with \0
*/
#include "libft.h"

void	ft_bzero(void	*s, size_t	n)
{
	ft_memset(s, '\0', n);
}
