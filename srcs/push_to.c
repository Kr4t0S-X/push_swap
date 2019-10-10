/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 16:46:29 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/10 19:59:29 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		push_a_to_b(t_ps *ps, int size)
{
	int i;
	int push_counter;
	int rot_counter;

	printf ("ca rentre dans la fonction");
	i = 0;
	push_counter = 0;
	while (i < ps->len_a)
	{
		if (ps->a[i] <= ps->pivot)
		{
			printf ("ca rentre");
			push_a(ps);
			push_counter++;
		}
		else
		{
			rotate_a(ps);
			rot_counter++;
		}
		i++;
	}
	i = 0;
	if (rot_counter)
		while (i < rot_counter)
		{
			reverse_rotate_a(ps);
			i++;
		}
	printf ("push_counter = %d\n", push_counter);
	return (push_counter);
}

int		push_b_to_a(t_ps *ps, int size)
{
	int i;
	int push_counter;

	i = 0;
	push_counter= 0;
	while (i < ps->push_len)
	{
		push_b(ps);
		i++;
		push_counter++;
	}
	return (push_counter);
}

int main(int argc, const char **argv)
{
	t_ps *ps;
	int i;
	int j;

	ps = init_ps(ps, argc);
	printf(" ps->push_len = %d\n", ps->push_len);
	i = argc - 1;
	j = 0;
	ps->len_a = argc;
	ps->pivot = 3;
	printf("COUCOU!\n");
	while (i > 0)
	{
		printf("COUCOU2!\n");
		ps->a[j] = atoi(argv[i]);
		printf("ps->a[%d] = %d\n", i, atoi(argv[i]));
		i--;
		j++;
	}
	i = 0;
	while (i < argc - 1)
	{
		printf("[%d] -> ", ps->a[i]);
		i++;
	}
	ps->push_len = push_a_to_b(ps, 2);
	printf(" ps->push_len = %d\n", ps->push_len);
	i = 0;
	while (i < ps->len_a)
	{
		printf("[%d] -> ", ps->a[i]);
		i++;
	}
	i = 0;
	while (i < ps->len_b)
	{
		printf("[%d] -> ", ps->b[i]);
		i++;
	}
	return 0;
}
