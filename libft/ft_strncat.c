/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:15:11 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/25 20:20:56 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t len)
{
	size_t n;
	size_t i;

	i = 0;
	n = ft_strlen(dest);
	while (src[i] != '\0' && len > 0)
	{
		dest[n] = src[i];
		n++;
		i++;
		len--;
	}
	dest[n] = '\0';
	return (dest);
}
