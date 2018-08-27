/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_some.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 18:25:29 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/17 18:26:55 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_free_dot(t_grid *map)
{
	int		j;
	int		i;

	i = 0;
	while (map->dot[i])
	{
		j = -1;
		while (map->dot[i][++j])
			free(map->dot[i][j]);
		free(map->dot[i++]);
	}
	free(map->dot);
	i = -1;
	while (++i < map->rws)
		free(map->pixel[i]);
	free(map->pixel);
	free(map->center);
}

void		ft_free_pixel_in_map(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
