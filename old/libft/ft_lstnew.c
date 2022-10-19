/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:16:42 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:41 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a list with the given element 
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*l;

	l = (t_list *) malloc(sizeof(t_list));
	if (l == 0)
		return (0);
	l->content = content;
	l->next = 0;
	return (l);
}
