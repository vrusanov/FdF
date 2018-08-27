/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 12:24:12 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/25 20:02:41 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	write_int(const char *str, int flag)
{
	size_t res;

	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		if ((res > LONG_MAX || (res == LONG_MAX
						&& (*str - '0') > 7)) && flag == 1)
			return (-1);
		else if ((res > LONG_MAX || (res == LONG_MAX
						&& (*str - '0') > 8)) && flag == -1)
			return (0);
		res = res * 10 + *str - '0';
		str++;
	}
	return (res);
}

int			ft_atoi(const char *str)
{
	size_t	res;
	int		flag;

	flag = 1;
	res = 0;
	if (*str)
	{
		while ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
		if (*str == '-')
			flag = -1;
		if (*str == '-' || *str == '+')
			str++;
		res = write_int(str, flag);
	}
	return ((flag < 0 ? -res : res));
}
