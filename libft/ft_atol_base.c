/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 10:50:13 by vrusanov          #+#    #+#             */
/*   Updated: 2018/08/21 10:55:26 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

static long		ft_atol_base2(const char *str, int base)
{
	long		res;
	char		*dig;
	char		*tmp;
	int			i;

	dig = "0123456789abcdefghijklmnopqrstuvwxyz";
	res = 0;
	i = 0;
	while (str[i] && (tmp = (char *)ft_memchr(dig, ft_tolower(str[i]), base)))
	{
		res = (res * base) + (tmp - dig);
		i++;
	}
	return (res);
}

int				ft_perevirka(char *str)
{
	int			n;

	n = 0;
	while (str[n] != '\0')
	{
		if (n > 7)
			return (1);
		n++;
	}
	n = 2;
	while (str[n] != '\0')
	{
		if ((str[n] >= 'A' && str[n] <= 'F')
				|| (str[n] >= 'a' && str[n] <= 'z'))
			n++;
		else if (str[n] >= '0' && str[n] <= '9')
			n++;
		else
			return (1);
	}
	return (0);
}

long			ft_atol_base(const char *str, int base)
{
	long		res;
	char		sign;
	int			i;

	sign = 1;
	i = 0;
	res = 0;
	if (!str || !*str || base < 2 || base > 36)
		return (res);
	if (ft_perevirka((char*)str) == 1)
	{
		ft_putstr("Error!");
		exit(1);
	}
	while (ft_isspace(str[i]))
		i++;
	sign = (base == 10 && str[i] == '-') ? -1 : 1;
	if (base == 10 && (*str == '-' || *str == '+'))
		i++;
	if (base == 16 && str[i] == '0' && ft_tolower(str[i + 1]) == 'x')
		res = ft_atol_base2(str + 2, base);
	else
		res = ft_atol_base2(str, base);
	return (res * sign);
}
