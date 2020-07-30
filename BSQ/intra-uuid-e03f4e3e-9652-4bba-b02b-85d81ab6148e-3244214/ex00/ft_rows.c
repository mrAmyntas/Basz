/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rows.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:17:55 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 22:18:11 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		ft_rows(char *buf)
{
	int l;
	int i;
	int x;

	i = 1;
	x = buf[0] - '0';
	l = ft_strlen(&buf[0], '\n') - 4;
	while (i <= l)
	{
		x = x * 10;
		x = x + (buf[i] - '0');
		i++;
	}
	return (x);
}
