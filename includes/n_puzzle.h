/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_puzzle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 10:00:43 by tfleming          #+#    #+#             */
/*   Updated: 2015/03/23 11:13:27 by tfleming         ###   ########.fr       */
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

void				puzzle_parser(char *filename, int *size, t_ushort **data);
void				solve(int size, t_ushort *input_data
							, t_heuristic heuristic);

/*
** heuristic functions
*/

int					manhattan(int size, t_ushort *data);

#endif
