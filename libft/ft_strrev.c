/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 13:50:58 by vrusanov          #+#    #+#             */
/*   Updated: 2018/05/02 14:32:29 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	temp;
	int		len;
	int		i;

	len = ft_strlen(str) - 1;
	i = 0;
	while (i < len && i != len)
	{
		temp = str[len];
		str[len] = str[i];
		str[i] = temp;
		len--;
		i++;
	}
	return (str);
}
