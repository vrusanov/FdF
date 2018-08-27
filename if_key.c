/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_key.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 18:27:42 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/21 15:08:18 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			exit_x(t_grid *map)
{
	mlx_destroy_window(map->mlx, map->win);
	ft_free_pixel_in_map(map->ret_map);
	ft_free_dot(map);
	exit(0);
}

int			key_hook(int key, t_grid *map)
{
	if (key == 49)
	{
		ft_free_dot(map);
		creating_map(map, map->rws, map->clms);
		centring(map);
		moving_centre(map);
	}
	else if (key == HIGH)
		move_map_h(map, 1);
	else if (key == DOWN_D)
		move_map_down(map, 2);
	else if (key == LEFT)
		move_map_x(map, -15);
	else if (key == RIGHT)
		move_map_y(map, 15);
	else if (key == UP)
		move_map_y(map, -15);
	else if (key == DOWN)
		move_map_x(map, 15);
	else
		key_color(key, map);
	mlx_clear_window(map->mlx, map->win);
	getting_pic(map);
	return (0);
}

void		key_color(int key, t_grid *map)
{
	if (key == 53)
		exit_x(map);
	else if (key == 32)
		make_ultraviolrtcolor(map);
	else if (key == 46)
		make_meadowlarkcolor(map);
	else if (key == 8)
		make_cherrytomato(map);
	else if (key == 35)
		make_pinklavander(map);
	else if (key == RED)
		make_redcolor(map);
}
