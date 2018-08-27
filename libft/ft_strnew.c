/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 13:41:05 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/25 20:22:36 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *temp;

	if (!(temp = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(temp, size + 1);
	return (temp);
}
