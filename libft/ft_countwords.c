/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 13:34:09 by vrusanov          #+#    #+#             */
/*   Updated: 2018/05/02 13:34:51 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(const char *src, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == c)
			i++;
		if (src[i] != c && src[i] != '\0')
		{
			count++;
			while (src[i] != c && src[i] != '\0')
				i++;
		}
	}
	return (count);
}
