/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 10:45:44 by tfleming          #+#    #+#             */
/*   Updated: 2015/04/22 14:07:23 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "ft_list.h"

/*
** returns a t_list of the lines in a file
*/

int					ft_read_file(char *filename, t_list **lines_destination)
{
	t_list			*lines;
	int				file_descriptor;
	int				read_return;
	char			*temporary_line;

	lines = NULL;
	file_descriptor = open(filename, O_RDONLY);
	while ((read_return = get_next_line(file_descriptor, &temporary_line)))
	{
		ft_list_push_front(&lines, temporary_line);
	}
	free(temporary_line);
	ft_list_reverse(&lines);
	*lines_destination = lines;
	if (read_return == 0)
		return (0);
	return (1);
}
