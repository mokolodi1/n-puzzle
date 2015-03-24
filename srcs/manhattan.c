/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manhattan.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 11:02:07 by tfleming          #+#    #+#             */
/*   Updated: 2015/03/24 22:59:00 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "n_puzzle.h"

// ehhhhh

static int			manhattan_from_previous(int size, t_tile *data
											, t_node *came_from)
{
	// uses optimization
	// I don't know how to code this in a way that makes senseeeeeee
	// I think we're going to have to split this into two functions
	// (aka two files), but I want to talk about that. I guess that
	// has to do with the engine... We only need to do a full
	// manhattan once (at the beginning), right? 
}

int					manhattan(int size, t_tile *data, t_node *came_from)
{
	if (came_from)
	{
		
	}
	// calculates the manhattan distance thing
}
