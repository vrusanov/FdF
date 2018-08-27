/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 12:36:55 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/17 12:36:58 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	src1 = (unsigned char*)src;
	dst1 = (unsigned char*)dest;
	if (dest == src)
		return (dest);
	if (src1 < dst1)
	{
		while (len > 0)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
	}
	else if (src1 > dst1)
	{
		while (len-- > 0)
		{
			*dst1 = *src1;
			dst1++;
			src1++;
		}
	}
	return (dest);
}
