/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_h.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 21:06:00 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/17 21:06:03 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		move_map_h(t_grid *map, int high)
{
	t_var	tmp;

	tmp.x = 0;
	while (tmp.x < map->rws)
	{
		tmp.y = -1;
		while (++tmp.y < map->clms)
		{
			if (ft_atoi(map->dot[tmp.x][tmp.y]) != 0)
				map->pixel[tmp.x][tmp.y].y +=
					((ft_atoi(map->dot[tmp.x][tmp.y]) * -1)
					- (ft_atoi(map->dot[tmp.x][tmp.y]) * high));
		}
		tmp.x++;
	}
}

void		move_map_down(t_grid *map, int down)
{
	t_var	tmp;

	tmp.x = 0;
	while (tmp.x < map->rws)
	{
		tmp.y = -1;
		while (++tmp.y < map->clms)
		{
			if (ft_atoi(map->dot[tmp.x][tmp.y]) != 0)
				map->pixel[tmp.x][tmp.y].y +=
					((ft_atoi(map->dot[tmp.x][tmp.y]) * -1)
						+ (ft_atoi(map->dot[tmp.x][tmp.y]) * down));
		}
		tmp.x++;
	}
}
