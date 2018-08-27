/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 10:55:51 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/21 12:12:47 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_error_map(int i)
{
	if (i == 1)
		ft_putendl("Error!\nEmpty line in map!");
	else if (i == 2)
		ft_putendl("Error!\nIncorrect number of characters in the string!");
	else
		ft_putendl("Error: invalid map");
	exit(EXIT_FAILURE);
}

int			test_int_h(char *str)
{
	char	*str_def;
	int		i;

	str_def = "2147483647";
	i = 0;
	while (str[i] != '\0')
	{
		if (str_def[i] < str[i])
		{
			free(str);
			return (1);
		}
		i++;
	}
	free(str);
	return (0);
}

int			test_str_int(char *str)
{
	int		i;
	int		n;

	i = 0;
	while (str[i] < 48 && str[i] > 57)
		i++;
	n = i;
	while (str[n] >= 48 && str[n] <= 57)
		n++;
	return (test_int_h(ft_strsub(str, i, n)));
}
