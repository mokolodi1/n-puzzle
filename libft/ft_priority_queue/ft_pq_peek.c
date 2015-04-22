/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pq_peek.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 00:36:45 by tfleming          #+#    #+#             */
/*   Updated: 2015/04/22 13:57:48 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_priority_queue.h"

void				*ft_pq_peek(t_priority_queue *priority_queue)
{
	if (priority_queue->element_count)
		return (priority_queue->data[1]);
	return (NULL);
}
