/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_disp_square.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:12:19 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 22:13:04 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdio.h>
#include <unistd.h>

void	ft_disp_square(void)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < g_info.rows - 1)
	{
		while (x < g_info.columns && g_point[y][x].loc != '\0')
		{
			write(1, &g_point[y][x].loc, 1);
			x++;
		}
		x = 0;
		y++;
	}
}
