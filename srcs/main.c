/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 10:01:10 by tfleming          #+#    #+#             */
/*   Updated: 2015/03/23 11:14:50 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "n_puzzle.h"

static t_heuristic	parse_heuristic(char *string)
{
	if (!string || ft_strequ(string, "--manahttan"))
		return (&manhattan);
	ft_putendl_exit("Invalid heuristic", 1);
}

int					main(int argc, char **argv)
{
	t_heuristic		heuristic;
	int				size;
	short			*input_data;

	if (argc < 2 || argc > 3)
		ft_putendl_exit("./n_puzzle file [--heuristic]", 1);
	heuristic = parse_heuristic((argc == 3 ? argv[2] : NULL));
	parse_puzzle(argv[1], &size, &input_data);
	solve(size, input_data, heuristic);
}
