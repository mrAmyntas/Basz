/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_checker.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:09:40 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 22:10:18 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdio.h>

int		ft_checker(int x, int y, int sx, int sy)
{
	int o;

	o = x;
	while (y <= sy)
	{
		while (x <= sx)
		{
			if (g_point[y][x].loc != g_info.empty)
				return (1);
			x++;
		}
		x = o;
		y++;
	}
	return (0);
}
