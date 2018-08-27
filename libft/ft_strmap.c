/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:14:10 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/26 18:15:01 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*temp;
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(temp = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		temp[i] = f(s[i]);
		i++;
	}
	return (temp);
}
