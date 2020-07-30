/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_readmap.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:10:35 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 22:24:02 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>

void	ft_readmap(char *fname)
{
	int		fd;
	int		ret;
	char	*buf;

	ret = ft_find_ret(fname);
	if (ret == -1)
		return ;
	fd = open(fname, O_RDONLY);
	buf = (char*)malloc(ret);
	if (buf == NULL)
		ft_putstr("malloc error");
	read(fd, buf, ret);
	ft_check_buf(buf, ret);
	free(buf);
}

void	ft_read_stdin(void)
{
	char	c_char;
	char	*buf;
	int		i;

	i = 0;
	buf = (char *)malloc(101000000);
	while (read(0, &c_char, 1) != 0)
	{
		buf[i] = c_char;
		i++;
	}
	buf[i] = '\n';
	ft_check_buf(buf, i);
	free(buf);
}

void	ft_check_buf(char *buf, int ret)
{
	int		q;

	q = ft_strlen(&buf[0], '\n');
	if (ft_check_info(q, buf) == 1)
		return ;
	ft_assign_globals(buf, q);
	if (ft_map_check(q, buf) == 1)
		return ;
	buf[ret] = '\0';
	ft_square(buf, q);
}
