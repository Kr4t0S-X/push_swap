/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:37:08 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/06 14:51:31 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list	*ps_lstnew(void)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (head != NULL)
	{
		head->value = 0;
		head->next = NULL;
	}
	return (head);
}
