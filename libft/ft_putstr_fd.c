/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: basz <basz@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 20:02:26 by basz          #+#    #+#                 */
/*   Updated: 2020/11/06 03:40:54 by basz          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void		ft_putstr_fd(char *s, int fd)
{
	int i;

	if (s == NULL)
		return ;
	i = ft_strlen(s);
	write(fd, s, i);
}
