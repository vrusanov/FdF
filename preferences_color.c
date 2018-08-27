/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preferences_color.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 21:07:54 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/17 21:07:58 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		make_redcolor(t_grid *map)
{
	t_var	tmp;

	tmp.x = -1;
	while (++tmp.x < map->rws)
	{
		tmp.y = -1;
		while (++tmp.y < map->clms)
			map->pixel[tmp.x][tmp.y].color = 0xC0392B;
	}
}

void		make_ultraviolrtcolor(t_grid *map)
{
	t_var	tmp;

	tmp.x = -1;
	while (++tmp.x < map->rws)
	{
		tmp.y = -1;
		while (++tmp.y < map->clms)
			map->pixel[tmp.x][tmp.y].color = 0x5F4B8B;
	}
}

void		make_meadowlarkcolor(t_grid *map)
{
	t_var	tmp;

	tmp.x = -1;
	while (++tmp.x < map->rws)
	{
		tmp.y = -1;
		while (++tmp.y < map->clms)
			map->pixel[tmp.x][tmp.y].color = 0xECDB54;
	}
}

void		make_cherrytomato(t_grid *map)
{
	t_var	tmp;

	tmp.x = -1;
	while (++tmp.x < map->rws)
	{
		tmp.y = -1;
		while (++tmp.y < map->clms)
			map->pixel[tmp.x][tmp.y].color = 0xE34132;
	}
}

void		make_pinklavander(t_grid *map)
{
	t_var	tmp;

	tmp.x = -1;
	while (++tmp.x < map->rws)
	{
		tmp.y = -1;
		while (++tmp.y < map->clms)
			map->pixel[tmp.x][tmp.y].color = 0xDBB2D1;
	}
}
