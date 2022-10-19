/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freearray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:23:44 by egiron-t          #+#    #+#             */
/*   Updated: 2022/10/19 15:47:59 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Returns a pointer with n positions filled with the received character 
*/
#include "libft.h"

void	ft_freearray(char **array)
{
	size_t i;

	i = 0;
	while (array[i])
	{
		free(array[i]);

		i++;
	}
free(array);

}
