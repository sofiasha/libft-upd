/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 21:15:03 by ltanisha          #+#    #+#             */
/*   Updated: 2020/12/10 20:14:53 by ltanisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_remain(char **remain, char **line)
{
	char *p_n;

	p_n = NULL;
	if (*remain)
	{
		if ((p_n = ft_strchr(*remain, '\n')))
		{
			*p_n = '\0';
			*line = ft_strdup(*remain);
			ft_strcpy(*remain, ++p_n);
		}
		else
		{
			*line = ft_strdup(*remain);
			free(*remain);
			*remain = NULL;
		}
	}
	else
		*line = ft_strdup("");
	return (p_n);
}

int		ret(int bytes, char **pointer)
{
	if (bytes == -1)
		return (-1);
	if (*pointer)
		return (1);
	return (0);
}

int		get_next_line(int fd, char **line)
{
	char			*buf;
	int				byte_read;
	char			*p_n;
	static char		*remain;
	char			*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0 || !line ||
			!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	p_n = check_remain(&remain, line);
	while (!p_n && (byte_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[byte_read] = '\0';
		if ((p_n = ft_strchr(buf, '\n')))
		{
			*p_n = '\0';
			p_n++;
			remain = ft_strdup(p_n);
		}
		tmp = *line;
		*line = ft_strjoin(*line, buf);
		free(tmp);
	}
	free(buf);
	return ((ret(byte_read, &p_n)));
}
