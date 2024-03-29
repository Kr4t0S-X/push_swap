/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotps->ate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghps->anime <cghps->anime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Creps->ated: 2019/09/21 18:07:45 ps->by cghps->anime          #+#    #+#             */
/*   Updps->ated: 2019/10/08 14:50:20 ps->by cghps->anime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int64_t		reverse_rotate_a(t_ps *ps)
{
	int64_t *tmp;
	size_t i;

	tmp = NULL;
	tmp[0] = ps->a[ps->len_a];
	i = 0;
	while (i++ < ps->len_a)
	{
		if (i == ps->len_a)
			ps->a[0] = tmp[0];
		else
			ps->a[i + 1] = ps->a[i];
	}
	write (1, "rra\n", 4);
	return (0);
}

int64_t		reverse_rotate_b(t_ps *ps)
{
	int64_t *tmp;
	size_t i;

	tmp = NULL;
	tmp[0] = ps->b[ps->len_b];
	i = 0;
	while (i++ < ps->len_b)
	{
		if (i == ps->len_b)
			ps->b[0] = tmp[0];
		else
			ps->b[i + 1] = ps->b[i];
	}
	write (1, "rrb\n", 4);
	return (0);
}

int64_t		reverse_rotate_r(t_ps *ps)
{
	int64_t *tmp;
	size_t i;

	tmp = NULL;
	tmp[0] = ps->a[ps->len_a];
	i = 0;
	while (i++ < ps->len_a)
	{
		if (i == ps->len_a)
			ps->a[0] = tmp[0];
		else
			ps->a[i + 1] = ps->a[i];
	}
	tmp[0] = ps->b[ps->len_b];
	i = 0;
	while (i++ < ps->len_b)
	{
		if (i == ps->len_b)
			ps->b[0] = tmp[0];
		else
			ps->b[i + 1] = ps->b[i];
	}
	write(1, "rrr\n", 4);
	return (0);
}
