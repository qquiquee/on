/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:38:17 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:45:28 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns true if it receives an alphanumeric value(ASCII)  */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
