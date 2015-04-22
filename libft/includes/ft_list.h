/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 15:34:47 by tfleming          #+#    #+#             */
/*   Updated: 2015/04/22 13:56:35 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include "libft.h"

typedef struct		s_list
{
	struct s_list		*next;
	void				*data;
}					t_list;

t_list				*ft_list_create_elem(void *data);
t_list				*ft_list_at(t_list *begin_list, unsigned int nbr);
void				ft_list_clear(t_list **begin_list);
t_list				*ft_list_find(t_list *begin_list,
								void *data_ref,
								int (*cmp)());
t_list				*ft_list_find_end(t_list *list);
void				ft_list_foreach(t_list *list, void (*function)(void *));
void				ft_list_foreach_if(t_list *list
								, void (*function)(void *)
								, void *data_ref
								, int (*cmp)());
t_list				*ft_list_last(t_list *begin_list);
void				ft_list_push_back(t_list **begin_list, void *data);
void				ft_list_push_front(t_list **begin_list, void *data);
t_list				*ft_list_push_params(int ac, char **av);
void				ft_list_remove_if(t_list **begin_list, void *data_ref
									, int (*cmp)());
void				ft_list_reverse(t_list **begin_list);
size_t				ft_list_size(t_list *begin_list);
void				ft_list_sort(t_list **first, int (*compare)(void*, void*));

#endif
