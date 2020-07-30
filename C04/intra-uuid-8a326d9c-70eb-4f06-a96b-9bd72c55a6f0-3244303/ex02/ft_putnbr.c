/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 10:26:01 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/23 11:44:47 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
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
		write(1, &str[j], 1);
		index--;
		j++;
	}
}

void	ft_putnbr(int nb)
{
	int		x;
	long	mod;
	long	nbb;
	char	str[12];
	int		i;

	nbb = nb;
	mod = 10;
	i = 10;
	if (nbb == 0)
		write(1, &"0", 1);
	if (nbb < 0)
	{
		write(1, "-", 1);
		nbb = nbb * -1;
	}
	while (i >= 0)
	{
		x = nbb % mod / (mod / 10) + 48;
		str[i] = x;
		mod = mod * 10;
		i--;
	}
	ft_putstr(str);
}
