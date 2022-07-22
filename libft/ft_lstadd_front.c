/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:49:48 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:27 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Add an item to the beginning of the list 
*/
#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
