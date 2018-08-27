/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:07:59 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/25 18:51:10 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb2;
	char			s;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	nb2 = n;
	if (nb2 >= 10)
	{
		ft_putnbr_fd((nb2 / 10), fd);
		ft_putnbr_fd((nb2 % 10), fd);
	}
	else
	{
		s = n + '0';
		write(fd, &s, 1);
	}
}
