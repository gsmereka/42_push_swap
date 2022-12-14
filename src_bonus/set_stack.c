/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:27:29 by gsmereka          #+#    #+#             */
/*   Updated: 2023/01/02 21:57:12 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/checker.h"

static void	init_stack_variables(t_list *node);
static void	check_fail_at_alloc_stack(t_data *data);

void	set_stack(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->stack_a_size)
	{
		ft_list_push_back(&data->stack_a, data->user_args[i]);
		i++;
	}
	check_fail_at_alloc_stack(data);
	init_stack_variables(data->stack_a);
}

static void	check_fail_at_alloc_stack(t_data *data)
{
	t_list	*node;
	int		i;

	i = 0;
	node = data->stack_a;
	while (i < data->stack_a_size - 1)
	{
		if (!node)
			exit_error(12, data);
		node = node->next;
		i++;
	}
}

static void	init_stack_variables(t_list *node)
{
	if (node)
	{
		init_stack_variables(node->next);
		node->binary_nmb = NULL;
	}
}
