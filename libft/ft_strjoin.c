/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:13:04 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/25 19:00:09 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(temp = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ft_strncpy(temp, s1, ft_strlen(s1));
	ft_strncat(temp, s2, ft_strlen(s2));
	return (temp);
}
