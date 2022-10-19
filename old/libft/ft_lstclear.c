/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:54:07 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:30 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Delete a list 
*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (lst != NULL)
	{
		while (*lst != NULL)
		{
			p = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = p;
		}
	}
}
