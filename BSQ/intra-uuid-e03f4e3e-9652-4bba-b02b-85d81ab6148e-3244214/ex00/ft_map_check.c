/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_map_check.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:16:54 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 22:17:11 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>
#include "functions.h"
#include <stdio.h>

int		ft_map_check(int q, char *buf)
{
	int i;
	int j;
	int x;
	int y;

	y = 0;
	x = 0;
	while (x < g_info.rows - 1)
	{
		j = 0;
		i = q + 1 + y;
		while (buf[i] != '\n' && buf[i] != '\0')
		{
			j++;
			i++;
		}
		y = y + j + 1;
		if (j != g_info.columns - 1)
			return (ft_error());
		x++;
	}
	if (buf[i + 2] != '\0')
		return (ft_error());
	return (0);
}
