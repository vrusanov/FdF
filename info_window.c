/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 18:35:46 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/17 21:18:06 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		info_window(t_grid *map)
{
	mlx_string_put(map->mlx, map->win, 5, 10, 0xE6B0AA,
			"Arrows - Move");
	mlx_string_put(map->mlx, map->win, 5, 30, 0xD7BDE2,
			"- = Smash");
	mlx_string_put(map->mlx, map->win, 5, 50, 0xA9CCE3,
			"+ = Grows up");
	mlx_string_put(map->mlx, map->win, 5, 90, 0xC0392B,
			"Red color - R");
	mlx_string_put(map->mlx, map->win, 5, 110, 0x5F4B8B,
			"Ultra Violet color - U");
	mlx_string_put(map->mlx, map->win, 5, 130, 0xECDB54,
			"Meadowlark color - M");
	mlx_string_put(map->mlx, map->win, 5, 150, 0xE34132,
			"Cherry Tomato color - C");
	mlx_string_put(map->mlx, map->win, 5, 170, 0xDBB2D1,
			"Pink Lavender color - P");
	mlx_string_put(map->mlx, map->win, 7, 190, 0xF8F8FF,
			"Restart - Space");
	mlx_string_put(map->mlx, map->win, 8, 215, 0xFFE4E1,
			"EXIT - Esc");
}
