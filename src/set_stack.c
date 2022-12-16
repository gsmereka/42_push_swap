/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:27:29 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/16 11:27:19 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	set_stack(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->max_stack_size)
	{
		ft_list_push_back(&data->stack_a, data->user_args[i]);
		i++;
	}
}