/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:17:43 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/31 20:08:33 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	simplify_numbers(t_data *data);

int	init_sort(t_data *data)
{
	if (stack_a_is_sorted(data))
		return (0);
	simplify_numbers(data);
	if (data->stack_a_size <= 3)
		sort_small_list(data);
	else if (data->stack_a_size > 3 && data->stack_a_size <= 5)
		sort_average_list(data);
	else if (data->stack_a_size > 5)
		sort_big_list(data);
	return (0);
}

static void	simplify_numbers(t_data *data)
{
	t_list	*node;
	t_list	*another_node;
	int		value;

	node = data->stack_a;
	while (node)
	{
		value = 0;
		another_node = data->stack_a;
		while (another_node)
		{
			if (node->nmb > another_node->nmb)
				value++;
			another_node = another_node->next;
		}
		node->simplified_nmb = value;
		node = node->next;
	}
}
