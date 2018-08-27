/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:13:28 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/24 18:40:15 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		dst_len;
	size_t		src_len;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	j = ft_strlen(src);
	dst_len = i;
	src_len = j;
	if (dstsize < dst_len + 1)
		return (src_len + dstsize);
	if (dstsize > dst_len + 1)
	{
		j = 0;
		while (i < dstsize - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (dst_len + src_len);
}
