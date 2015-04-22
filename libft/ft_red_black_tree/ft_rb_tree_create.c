/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb_tree_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 16:58:23 by tfleming          #+#    #+#             */
/*   Updated: 2015/04/22 16:15:47 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_red_black_tree.h"

t_redblack_tree		*ft_rb_tree_create(int (*compare)(void*, void*)
									   , void (*free_inside)(void*))
{
	t_redblack_tree	*new;

	new = malloc(sizeof(t_redblack_tree));
	new->compare = compare;
	new->free_inside = free_inside;
	new->nil = malloc(sizeof(t_redblack_node));
	new->nil->data = NULL;
	new->nil->is_red = 0;
	new->root = new->nil;
}
