/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_x_y.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 21:06:37 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/17 21:06:41 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		move_map_y(t_grid *map, int mv)
{
	t_var	tmp;

	tmp.x = 0;
	while (tmp.x < map->rws)
	{
		tmp.y = 0;
		while (tmp.y < map->clms)
		{
			map->pixel[tmp.x][tmp.y].y = map->pixel[tmp.x][tmp.y].y + mv;
			tmp.y++;
		}
		tmp.x++;
	}
}

void		move_map_x(t_grid *map, int mv)
{
	t_var	tmp;

	tmp.x = 0;
	while (tmp.x < map->rws)
	{
		tmp.y = 0;
		while (tmp.y < map->clms)
		{
			map->pixel[tmp.x][tmp.y].x = map->pixel[tmp.x][tmp.y].x + mv;
			tmp.y++;
		}
		tmp.x++;
	}
}
