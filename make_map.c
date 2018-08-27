/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 16:35:28 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/17 18:48:30 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		allocate_mem_for_map(t_grid *map, int rws, int clms)
{
	int		i;

	i = -1;
	map->rws = rws;
	map->clms = clms;
	map->pixel = (t_dot **)malloc(sizeof(t_dot *) * (rws + 1));
	while (++i < rws)
		map->pixel[i] = (t_dot *)malloc(sizeof(t_dot) * clms);
	map->pixel[i] = NULL;
}

void		creating_map(t_grid *map, int rws, int clms)
{
	t_var	tmp;
	int		step;

	step = 1;
	tmp.x = -1;
	allocate_mem_for_map(map, rws, clms);
	map->dot = (char***)malloc(sizeof(char**) * rws + 1);
	map->dot[rws] = NULL;
	while (++tmp.x < rws)
	{
		map->dot[tmp.x] = ft_strsplit(map->ret_map[tmp.x], ' ');
		tmp.y = -1;
		while (++tmp.y < clms)
		{
			map->pixel[tmp.x][tmp.y].x = tmp.y * 15 + step;
			map->pixel[tmp.x][tmp.y].y =
				tmp.x * 15 - ft_atoi(map->dot[tmp.x][tmp.y]);
			map->pixel[tmp.x][tmp.y].z = ft_atoi(map->dot[tmp.x][tmp.y]);
			(ft_strchr(map->dot[tmp.x][tmp.y], ',')) == 0 ?
				(map->pixel[tmp.x][tmp.y].color = 0xC1BFB9) :
				(map->pixel[tmp.x][tmp.y].color =
				ft_atol_base(ft_strchr(map->dot[tmp.x][tmp.y], ',') + 1, 16));
		}
		step++;
	}
}
