/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_lines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 18:18:53 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/17 18:25:19 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		getting_pic(t_grid *map)
{
	t_var	tmp;

	tmp.x = 0;
	tmp.y = 0;
	while (tmp.x < map->rws)
	{
		while (tmp.y < map->clms)
		{
			if (tmp.x + 1 < map->rws)
				drawing_line(map, &map->pixel[tmp.x][tmp.y],
						&map->pixel[tmp.x + 1][tmp.y]);
			if (tmp.y + 1 < map->clms)
				drawing_line(map, &map->pixel[tmp.x][tmp.y],
						&map->pixel[tmp.x][tmp.y + 1]);
			tmp.y++;
		}
		tmp.y = 0;
		tmp.x++;
	}
	make_win_for_info(map);
	info_window(map);
}

void		make_win_for_info(t_grid *map)
{
	int		i;
	int		n;

	i = -1;
	while (i++ < 240)
	{
		n = -1;
		while (n++ < 240)
		{
			mlx_pixel_put(map->mlx, map->win, i, n, 0x2F4F4F);
		}
	}
}

void		drawing_line(t_grid *map, t_dot *p0, t_dot *p1)
{
	double	x;
	double	y;

	x = p0->x;
	y = p0->y;
	if (fabs(p1->y - p0->y) > fabs(p1->x - p0->x))
	{
		while (p0->y > p1->y ? y >= p1->y : y <= p1->y)
		{
			x = ((y - p0->y) / (p1->y - p0->y) * (p1->x - p0->x) + p0->x);
			mlx_pixel_put(map->mlx, map->win, x, y, p0->color);
			p1->y > p0->y ? y++ : y--;
		}
	}
	else
	{
		while (p0->x > p1->x ? x >= p1->x : x <= p1->x)
		{
			y = ((x - p0->x) / (p1->x - p0->x) * (p1->y - p0->y) + p0->y);
			mlx_pixel_put(map->mlx, map->win, x, y, p0->color);
			p1->x > p0->x ? x++ : x--;
		}
	}
}
