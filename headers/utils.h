/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:15:19 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/15 13:50:44 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./objects.h"

char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *s);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// ft_printf
int		ft_printf(const char *s, ...);
int		ft_toupper(int c);
int		ft_isdigit(int c);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
char	*ft_itohex(unsigned long long n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

// list_utils_1
t_list *ft_create_elem(void *nmb);
void 	ft_list_push_front(t_list **begin_list, void *nmb);
int 	ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);
void 	ft_list_push_back(t_list **begin_list, void *nmb);

// list_utils_2
t_list *ft_list_push_strs(int size, char **strs);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
void 	ft_list_reverse(t_list **begin_list);

#endif
