/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 12:35:48 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/17 12:35:51 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	c1;

	s1 = (unsigned char*)s;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c1)
			return (s1 + i);
		i++;
	}
	return (0);
}
