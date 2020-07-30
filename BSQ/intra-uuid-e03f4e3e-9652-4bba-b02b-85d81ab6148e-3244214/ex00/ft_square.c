/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_square.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:18:51 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 22:20:01 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_free(struct s_pnt **map)
{
	int				i;

	i = 0;
	while (i < g_info.rows)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

void	ft_square(char *buf, int q)
{
	struct s_pnt	**map;
	int				i;
	int				j;

	i = 0;
	map = (struct s_pnt**)malloc(sizeof(struct s_pnt**) * g_info.rows);
	if (map == NULL)
		ft_putstr("malloc error");
	while (i < g_info.rows)
	{
		j = 0;
		map[i] = (struct s_pnt*)malloc(sizeof(struct s_pnt*) * g_info.columns);
		if (map[i] == NULL)
			ft_putstr("malloc error");
		while (j < g_info.columns)
		{
			map[i][j].loc = buf[(q + 1) + (i * g_info.columns) + j];
			j++;
		}
		i++;
	}
	g_point = map;
	ft_find_size(0, 0);
	ft_free(map);
}
