/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_puzzle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 10:00:43 by tfleming          #+#    #+#             */
/*   Updated: 2015/03/24 15:17:31 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef N_PUZZLE_H
# define N_PUZZLE_H

/*
** data (short*) is a flattened two-dimensional array referenced by
** data[row * size + column]
*/

typedef unsigned short					t_ushort;
typedef int (*f)(int size, t_ushort *data) t_heuristic;

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
	t_ushort		*data;
	int				best_known_path_cost;
	int				heuristic_cost_estimate;
	struct s_node	*came_from;
}					t_node;

void				puzzle_parser(char *filename, int *size, t_ushort **data);
void				solve(int size, t_ushort *input_data
							, t_heuristic heuristic);

/*
** heuristic functions
*/

int					manhattan(int size, t_ushort *data);

#endif
