/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 13:05:14 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/25 18:58:30 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (1);
	if (s1 != NULL && s2 == NULL)
		return (0);
	if (s1 == NULL && s2 != NULL)
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
