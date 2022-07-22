/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:46:55 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:46:58 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Add an element to the end of the list 
*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	l = ft_lstlast(*lst);
	if (l == NULL)
		*lst = new;
	else
		l->next = new;
}
