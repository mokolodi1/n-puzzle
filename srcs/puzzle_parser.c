/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 10:01:21 by tgauvrit          #+#    #+#             */
/*   Updated: 2015/03/24 16:57:01 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "n_puzzle.h"
#define BUF_SIZE 1000

static char	*read_puzzle(char *path)
{
	char	*str;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	// Rock the fuck out.
	if ((fd = open(path, O_RDONLY)) == -1)
		ft_putendl_exit("File can't be accessed or doesn't exist.");
	str = malloc(1);
	*str = '\0';
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		ft_strjoinfree(&str, buf);
	}
	if (ret != 0)
		ft_putendl_exit("Read returned a negative value.");
	close(fd);
	return (str);
}

void		skip_spacing(char **str)
{
	char	*temp;

	temp = *str;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '#')
		{
			while (*temp != '\0' && *temp != '\n')
				temp++;
		}
		else
			temp++;
	}
	*str = temp;
}

void		pass_short(char **str, t_ushort *num, int *count)
{
	char		*temp;
	t_ushort	value;

	skip_spacing(str);
	temp = *str;
	if (*temp == '\0')
		return ;
	value = 0;
	while (*temp >= '0' && *temp <= '9')
		value = (value * 10) + (*temp - '0')
	num[(*count)++] = value;
	*str = temp;
}

void		parse_puzzle(char *path, int *width, t_tile **data)
{
	char		*str;
	char		*temp;
	t_ushort	*nums;
	int			count;

	str = read_puzzle(path);
	temp = str;
	//~PARSE
	pass_short(&temp, (t_ushort *)width);
	*width = (int)*((t_ushort *)width);
	*data = malloc(sizeof(t_tile) * (*width) * (*width));
	nums = (t_ushort *)*data;
	count = 0;
	while (*temp != '\0')
		pass_short(&temp, nums, &count);
	//~PARSE END
	//~CHECK
	if (count != (*width) * (*width))
		ft_putendl_exit("Puzzle does not contain the correct amount of tiles.");
	//Check that all values are present
	//Convert shorts to coordinates
	//Change pass_short to pass_coordinates
	//~CHECK END
	free(str);
}
