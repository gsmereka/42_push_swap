/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:03:35 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/19 20:01:39 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./objects.h"
# include "./utils.h"
# include <sys/wait.h>
# include <fcntl.h>
# include <errno.h>
# include <stdio.h>

// check_args
void	check_args(int argc);

// set_numbers
void	set_numbers(char **argv, t_data *data);

// set_numbers
void	set_stack(t_data *data);

// initialize
int		initialize(int argc, t_data *data);

// execute

// finalize
void	exit_error(int error_type, t_data *data);
void	finalize(t_data *data);

// list_utils_1
t_list	*ft_create_elem(int nmb);
void	ft_list_push_front(t_list **begin_list, int nmb);
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
void	ft_list_push_back(t_list **begin_list, int nmb);

// list_utils_2
void	ft_list_clear(t_list *begin_list);
t_list	*ft_list_at(t_list *begin_list, unsigned int index);
void	ft_list_reverse(t_list **begin_list);

// swaps
int		ft_swap(char stack_c, t_data *data);
int		ft_push(char stack_c, t_data *data);
int		ft_rotate(char stack_c, t_data *data);
int		ft_reverse_rotate(char stack_c, t_data *data);

#endif
