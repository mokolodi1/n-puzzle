/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_red_black_tree.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 16:56:31 by tfleming          #+#    #+#             */
/*   Updated: 2015/04/22 14:11:49 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RED_BLACK_TREE_H
# define FT_RED_BLACK_TREE_H

/*
** code from:
** http://web.mit.edu/~emin/www.old/source_code/red_black_tree/index.html
*/

/*
** Why red_p? Because Lisp.
*/

typedef struct		s_redblack_node
{
	void					*data;
	int						is_red;
	struct s_redblack_node	*left;
	struct s_redblack_node	*right;
	struct s_redblack_node	*parent;
}					t_redblack_node;

typedef struct		s_redblack_tree
{
	int				(*compare)(void*, void*);
	void			free_inside(void*, void*);
	t_redblack_node	root;
	t_redblack_node	nil;
}					t_redblack_tree;



#endif
