/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:17:13 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/26 19:06:09 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(const char *src, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == c)
			i++;
		if (src[i] != c && src[i] != '\0')
		{
			count++;
			while (src[i] != c && src[i] != '\0')
				i++;
		}
	}
	return (count);
}

static int		ft_count_chars(const char *src, char c)
{
	int i;

	i = 0;
	while (src[i] != c && src[i] != '\0')
		i++;
	return (i);
}

static	char	***ft_write(char const *s, char ***dest, char c, int *j)
{
	if (s == NULL)
		return (NULL);
	if (!(*dest = (char**)malloc(sizeof(char*) * (ft_count_words(s, c) + 1))))
		return (NULL);
	*j = 0;
	return (dest);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;

	if ((!(ft_write(s, &dest, c, &j))))
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		if (*s != c && *s)
		{
			dest[j] = (char *)malloc(sizeof(char) * (ft_count_chars(s, c) + 1));
			i = 0;
			while (*s != c && *s)
			{
				dest[j][i++] = *s;
				s++;
			}
			dest[j][i] = '\0';
			j++;
		}
	}
	dest[j] = NULL;
	return (dest);
}
