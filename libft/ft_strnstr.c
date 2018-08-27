/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:16:32 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/25 17:07:26 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*temp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	temp = (char*)haystack;
	while (temp[i] != '\0' && len > i)
	{
		while ((temp[i + j] == needle[j]) && len > i + j)
		{
			if (needle[j + 1] == '\0')
				return (temp + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
