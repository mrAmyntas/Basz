/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_compare.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:14:25 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 22:14:59 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdio.h>

void	ft_compare(int j, int i)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < g_info.rows - 1)
	{
		while (x < g_info.columns - 1)
		{
			if (g_point[y][x].size > g_point[j][i].size)
			{
				j = y;
				i = x;
			}
			x++;
		}
		x = 0;
		y++;
	}
	ft_translate(j, i);
}
