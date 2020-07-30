/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_size.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:15:15 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 22:16:05 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdio.h>

void	ft_find_size(int x, int y)
{
	int sx;
	int sy;

	while (y < g_info.rows)
	{
		while (x < g_info.columns)
		{
			sx = x;
			sy = y;
			while (sy < g_info.rows && sx < g_info.columns
					&& ft_checker(x, y, sx, sy) == 0)
			{
				sx++;
				sy++;
			}
			g_point[y][x].size = (sx - x);
			x++;
		}
		x = 0;
		y++;
	}
	ft_compare(0, 0);
}
