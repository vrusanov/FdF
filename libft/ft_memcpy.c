/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:43:13 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/26 18:14:14 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*dest1;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src)
		return (dest);
	temp = (unsigned char*)src;
	dest1 = (unsigned char*)dest;
	i = 0;
	while (len-- > 0)
	{
		dest1[i] = temp[i];
		i++;
	}
	return (dest);
}
