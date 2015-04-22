/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_priority_queue.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 15:38:35 by tfleming          #+#    #+#             */
/*   Updated: 2015/04/22 13:58:20 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRIORITY_QUEUE_H
# define FT_PRIORITY_QUEUE_H

/*
** http://pages.cs.wisc.edu/~vernon/cs367/notes/11.PRIORITY-Q.html
** sorting: bigger is better
** data array starts at 1 (data[0] is always NULL)
*/

# include <stdlib.h>
# include "libft.h"

typedef struct		s_priority_queue
{
	void			**data;
	size_t			data_count;
	size_t			element_count;
	int				(*compare)(void*, void*);
}					t_priority_queue;

t_priority_queue	*ft_pq_create_new(int (*compare)(void*, void*));
void				ft_pq_add(t_priority_queue *priority_queue, void *element);
void				*ft_pq_remove(t_priority_queue *priority_queue);
void				ft_pq_resize_array(t_priority_queue *priority_queue);
void				*ft_pq_peek(t_priority_queue *priority_queue);

#endif
