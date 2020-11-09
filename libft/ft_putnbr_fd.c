/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: basz <basz@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 20:41:54 by basz          #+#    #+#                 */
/*   Updated: 2020/11/04 20:42:02 by basz          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static void	ft_putstr(char *str, int fd)
{
	int index;
	int j;

	j = 0;
	index = 11;
	while (str[j] == '0')
	{
		index--;
		j++;
	}
	while (index != 0)
	{
		write(fd, &str[j], 1);
		index--;
		j++;
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	int		x;
	long	mod;
	long	nbb;
	char	str[12];
	int		i;

	nbb = n;
	mod = 10;
	i = 10;
	if (nbb == 0)
		write(fd, &"0", 1);
	if (nbb < 0)
	{
		write(fd, "-", 1);
		nbb = nbb * -1;
	}
	while (i >= 0)
	{
		x = nbb % mod / (mod / 10) + 48;
		str[i] = x;
		mod = mod * 10;
		i--;
	}
	ft_putstr(str, fd);
}
