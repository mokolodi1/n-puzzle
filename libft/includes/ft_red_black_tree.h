/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_red_black_tree.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 16:56:31 by tfleming          #+#    #+#             */
/*   Updated: 2015/03/26 17:06:10 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RED_BLACK_TREE_H
# define FT_RED_BLACK_TREE_H

/*
** Why red_p? Because Lisp.
*/

typedef struct		s_red_black_tree_node
{
	void							*data;
	int								red_p;
	struct	s_red_black_tree_node	left;
	struct	s_red_black_tree_node	right;
	struct	s_red_black_tree_node	parent;
}					t_red_black_tree_node;



#endif
