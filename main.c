/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 17:55:15 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/21 11:38:58 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

char		**reading_map(char *av)
{
	char	**ret_map;
	char	*res;
	int		fd;
	size_t	i;
	int		strs_count;

	i = 0;
	strs_count = counting_strs_in_map(&av);
	if ((fd = open(av, O_RDONLY)) == -1 || read(fd, &res, 0) == -1)
	{
		ft_putstr("Error");
		exit(1);
	}
	ret_map = (char**)malloc(sizeof(char *) * (strs_count + 1));
	while (get_next_line(fd, &res) > 0)
	{
		ret_map[i] = ft_strdup(res);
		i++;
		free(res);
	}
	ret_map[i] = NULL;
	start_valid_map(ret_map);
	return (ret_map);
}

void		restart(t_grid *map)
{
	map->ret_map = reading_map(map->av[1]);
	map->clms = counting_colums_in_map(map->ret_map[0]);
	map->rws = counting_rows_in_map(map->ret_map);
	creating_map(map, map->rws, map->clms);
	map->mlx = mlx_init();
	map->win = mlx_new_window(map->mlx, WIDTH, HEIGHT, "fdf by vrusanov");
	centring(map);
	moving_centre(map);
	getting_pic(map);
	mlx_hook(map->win, 2, 5, key_hook, map);
	mlx_hook(map->win, 17, 1L << 17, exit_x, map);
	mlx_loop(map->mlx);
}

int			main(int ac, char **av)
{
	t_grid	*map;

	if (ac == 2)
	{
		if (!(map = (t_grid *)malloc(sizeof(t_grid))))
			return (1);
		map->av = av;
		restart(map);
	}
	else
	{
		ft_putstr("Usage: ./fdf");
		exit(1);
	}
	return (0);
}
