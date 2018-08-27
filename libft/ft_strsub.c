/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 14:41:31 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/10 16:02:00 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s)
	{
		if (start > ft_strlen(s))
			return (0);
		sub = ft_strnew(len);
		if (sub == NULL)
			return (NULL);
		i = 0;
		while (i < len)
		{
			sub[i] = s[start + i];
			i++;
		}
		sub[i] = 0;
		return (sub);
	}
	return (NULL);
}
