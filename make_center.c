/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_center.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 18:33:33 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/17 18:34:46 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		centring(t_grid *map)
{
	map->center = (t_dot *)malloc(sizeof(t_dot));
	map->center->x = (map->pixel[map->rws - 1][map->clms - 1].x +
			map->pixel[0][0].x) / 2;
	map->center->y = (map->pixel[map->rws - 1][map->clms - 1].y +
			map->pixel[0][0].y) / 2;
}

void		moving_centre(t_grid *map)
{
	t_var	tmp;

	tmp.y = (HEIGHT) / 2 - map->center->y;
	tmp.x = (WIDTH) / 2 - map->center->x;
	move_map_y(map, tmp.y);
	move_map_x(map, tmp.x);
}
