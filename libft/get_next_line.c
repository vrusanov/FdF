/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:21:17 by vrusanov          #+#    #+#             */
/*   Updated: 2018/06/13 16:23:21 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

int				get_next_line(int fd, char **line)
{
	static char	*buf[4864];
	char		buff[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd == -1 || fd > 4864 || read(fd, 0, 0) == -1 || line == NULL)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (!(buf[fd]))
			buf[fd] = ft_strnew(1);
		tmp = ft_strjoin(buf[fd], buff);
		free(buf[fd]);
		buf[fd] = tmp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (ret == -1)
		return (-1);
	if ((buf[fd] == NULL || buf[fd][0] == '\0') && ret == 0)
		return (0);
	return (is_line(buf, fd, line));
}

int				is_line(char *buff[], int fd, char **line)
{
	int			i;
	char		*temp;

	i = 0;
	while (buff[fd][i] != '\n' && buff[fd][i] != '\0')
		i++;
	if (buff[fd][i] == '\n')
	{
		*line = ft_strsub(buff[fd], 0, i);
		temp = ft_strdup(buff[fd] + i + 1);
		free(buff[fd]);
		buff[fd] = temp;
	}
	else if (buff[fd][i] == '\0')
	{
		*line = ft_strdup(buff[fd]);
		temp = ft_strdup(buff[fd] + i);
		free(buff[fd]);
		buff[fd] = temp;
	}
	return (1);
}
