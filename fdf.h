/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 21:19:11 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/21 11:41:45 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define HEIGHT	1500
# define WIDTH	1500
# define LEFT   123
# define RIGHT  125
# define DOWN   124
# define UP		126
# define RED    15
# define HIGH   24
# define DOWN_D	27
# include "libft/libft.h"
# include "minilibx/mlx.h"
# include <math.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct		s_var
{
	int				x;
	int				y;
}					t_var;

typedef struct		s_dot
{
	double			x;
	double			y;
	double			z;
	double			color;
}					t_dot;

typedef struct		s_grid
{
	int				rws;
	int				clms;
	t_dot			**pixel;
	t_dot			*center;
	void			*mlx;
	void			*win;
	char			***dot;
	char			**ret_map;
	char			**av;
}					t_grid;

int					counting_strs_in_map(char **av);
int					counting_rows_in_map(char **ret_map);
int					counting_colums_in_map(char *str);
void				start_valid_map(char **ret_map);
int					valid_map_size_param(char **ret_map);
char				**reading_map(char *av);
void				allocate_mem_for_map(t_grid *map, int clms, int rws);
void				creating_map(t_grid *map, int rws, int clms);
void				getting_pic(t_grid *map);
void				getting_pic(t_grid *map);
void				drawing_line(t_grid *map, t_dot *p0, t_dot *p1);
void				ft_free_pixel_in_map(char **str);
void				centring(t_grid *map);
void				moving_centre(t_grid *map);
void				move_map_x(t_grid *map, int mv);
void				move_map_y(t_grid *map, int mv);
void				make_redcolor(t_grid *map);
void				move_map_h(t_grid *map, int high);
void				restart(t_grid *map);
void				move_map_down(t_grid *map, int down);
void				ft_free_dot(t_grid *map);
void				restart(t_grid *map);
int					key_hook(int key, t_grid *map);
int					exit_x(t_grid *map);
void				info_window(t_grid *map);
void				make_ultraviolrtcolor(t_grid *map);
void				make_meadowlarkcolor(t_grid *map);
void				make_cherrytomato(t_grid *map);
void				make_pinklavander(t_grid *map);
void				key_color(int key, t_grid *map);
void				make_win_for_info(t_grid *map);
int					test_str_int(char *str);
int					test_int_h(char *str);
void				ft_error_map(int i);

#endif
