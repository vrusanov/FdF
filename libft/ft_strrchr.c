/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:16:55 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/17 13:16:59 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *temp;

	temp = 0;
	while (*s)
	{
		if (*s == (char)c)
			temp = (char*)s;
		s++;
	}
	if ((char)c == 0)
		return ((char*)s);
	return (temp);
}
