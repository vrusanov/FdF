/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 11:30:59 by vrusanov          #+#    #+#             */
/*   Updated: 2018/05/08 12:04:46 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	void	ft_minus(long *tmp, int base, int *len)
{
	if (*tmp < 0)
	{
		if (base == 10)
			*len += 1;
		*tmp = -*tmp;
	}
}

static	char	*ft_str_base(void)
{
	char *temp;

	temp = (char*)malloc(sizeof(char) * 17);
	temp = "0123456789ABCDEF\0";
	return (temp);
}

char			*ft_itoa_base(int value, int base)
{
	long	tmp;
	int		len;
	char	*res;
	char	*str_base;

	str_base = ft_str_base();
	tmp = value;
	len = 0;
	while (tmp)
	{
		tmp /= base;
		len++;
	}
	tmp = value;
	ft_minus(&tmp, base, &len);
	res = (char*)malloc(sizeof(char) * len + 1);
	res[len] = '\0';
	while (tmp)
	{
		res[--len] = str_base[tmp % base];
		tmp /= base;
	}
	if (base == 10 && value < 0)
		res[--len] = '-';
	return (res);
}
