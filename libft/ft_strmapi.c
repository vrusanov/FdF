/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:14:47 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/25 20:21:30 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(temp = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	return (temp);
}
