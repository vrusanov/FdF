/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 13:15:36 by vrusanov          #+#    #+#             */
/*   Updated: 2018/05/08 11:30:38 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ifmin(int *n, int *len, int *flag)
{
	*flag = 1;
	*n *= -1;
	*len += 1;
}

char			*ft_itoa(int n)
{
	int		len;
	int		temp;
	char	*dest;
	int		flag;

	flag = 0;
	len = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		ifmin(&n, &len, &flag);
	temp = n;
	while (temp /= 10)
		len++;
	if (!(dest = ft_strnew(len)))
		return (NULL);
	while (len--)
	{
		dest[len] = n % 10 + '0';
		n = n / 10;
	}
	if (flag)
		dest[0] = '-';
	return (dest);
}
