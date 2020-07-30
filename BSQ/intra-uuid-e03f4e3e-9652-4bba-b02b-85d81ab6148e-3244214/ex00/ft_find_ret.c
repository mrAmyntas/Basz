/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_ret.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:17:25 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 22:17:43 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>

int		ft_find_ret(char *fname)
{
	int		fd;
	char	*s_buf;
	int		ret;

	ret = 0;
	fd = open(fname, O_RDONLY);
	if (fd == -1)
		ft_error();
	s_buf = (char*)malloc(1);
	if (s_buf == NULL)
		ft_putstr("malloc error");
	while (read(fd, s_buf, 1) != 0)
		ret++;
	close(fd);
	free(s_buf);
	return (ret);
}
