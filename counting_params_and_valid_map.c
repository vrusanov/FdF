/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counting_params_and_valid_map.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 18:06:17 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/21 11:41:09 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			counting_strs_in_map(char **av)
{
	int		fd;
	char	*line;
	int		str_counter;

	str_counter = 0;
	fd = open(*av, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		if (line[0] == '\0')
		{
			ft_putstr("Emty line in map");
			free(line);
			exit(1);
		}
		str_counter++;
		free(line);
	}
	close(fd);
	return (str_counter);
}

int			counting_rows_in_map(char **ret_map)
{
	int		rws;
	int		i;

	i = -1;
	while (ret_map[++i])
	{
		if (test_str_int(ret_map[i]))
			ft_error_map(1212);
	}
	rws = 0;
	while (ret_map[rws] != '\0')
		rws++;
	return (rws);
}

int			counting_colums_in_map(char *str)
{
	int		clms;
	int		i;
	char	**str_split;

	i = -1;
	clms = 0;
	while (str[++i])
	{
		if (test_str_int(str))
			ft_error_map(12);
	}
	str_split = ft_strsplit(str, ' ');
	while (str_split[clms])
	{
		free(str_split[clms]);
		clms++;
	}
	free(str_split);
	return (clms);
}

int			valid_map_size_param(char **ret_map)
{
	int		var_param[3];

	var_param[0] = 0;
	var_param[1] = counting_colums_in_map(ret_map[0]);
	while (ret_map[var_param[0]])
	{
		var_param[2] = counting_colums_in_map(ret_map[var_param[0]]);
		if (var_param[1] > var_param[2] || var_param[1] < var_param[2])
			return (1);
		var_param[0] += 1;
	}
	return (0);
}

void		start_valid_map(char **ret_map)
{
	if (ret_map[0] == NULL)
	{
		ft_error_map(3);
		exit(1);
	}
	if (valid_map_size_param(ret_map))
	{
		write(1, "Error: invalid map\n", 19);
		exit(1);
	}
}
