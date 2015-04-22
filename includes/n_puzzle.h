/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_puzzle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 10:00:43 by tfleming          #+#    #+#             */
/*   Updated: 2015/04/22 14:10:00 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef N_PUZZLE_H
# define N_PUZZLE_H

/*
** data (short*) is a flattened two-dimensional array referenced by
** data[row * size + column]
*/

typedef int (*f)(int size, t_tile *data) t_heuristic;

typedef struct		s_tile
{
	unsigned char	x;
	unsigned char	y;
}					t_tile;

/*
** g() = best_known_path_cost
** f() = heuristic_cost_estimate + best_known_path_cost
*/

typedef struct		s_node
{
	t_tile			*data;
	t_tile			location_of_blank;
	int				best_known_path_cost;
	int				heuristic_cost_estimate;
	struct s_node	*came_from;
}					t_node;

typedef struct		s_solver
{
	int				size;
	t_rb_tree		already_evaluated_heuristic;
	t_rb_tree		already_evaluated_data;
	t_rb_tree		to_be_evaluatd_heuristic;
	t_rb_tree		to_be_evaluatd_data;
}					t_solver;

void				puzzle_parser(char *filename, int *size, t_ushort **data);
void				solve(int size, t_ushort *input_data
							, t_heuristic heuristic);
// generate_neighbors() (also in Makefile)

/*
** heuristic functions
*/

int					manhattan(int size, t_tile *data, t_node *came_from);

#endif
