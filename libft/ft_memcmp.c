/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 12:36:05 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/25 20:17:37 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char*)s1;
	s22 = (unsigned char*)s2;
	while (n && *s11 == *s22)
	{
		s11++;
		s22++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s11 - *s22);
}
