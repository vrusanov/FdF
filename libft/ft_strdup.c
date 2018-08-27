/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:54:56 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/25 20:19:43 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*temp;
	char	*ptr;

	if (!(temp = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	ptr = temp;
	while (*src != '\0')
		*temp++ = *src++;
	*temp = '\0';
	return (ptr);
}
