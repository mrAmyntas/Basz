/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_translate.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:18:21 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 22:18:41 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdio.h>

void	ft_translate(int y, int x)
{
	int i;
	int j;

	j = y;
	while (j < g_point[y][x].size + y && j < g_info.rows)
	{
		i = x;
		while (i < g_point[y][x].size + x && i < g_info.columns - 1)
		{
			g_point[j][i].loc = g_info.full;
			i++;
		}
		j++;
	}
	ft_disp_square();
}
