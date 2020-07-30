/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeiboom <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 17:08:27 by rmeiboom      #+#    #+#                 */
/*   Updated: 2020/07/12 18:32:14 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	g_diag_corners_l = 47;
char	g_fillers = 42;
char	g_whitespace = ' ';
char	g_diag_corners_r = 92;
char	g_nl = 10;
int		g_x = 0;
int		g_y = 0;

void	ft_newlin(void)
{
	ft_putchar(g_nl);
	g_x = 0;
	g_y++;
}

void	rush01(int x, int y)
{
	while (y > g_y)
	{
		while (x > g_x)
		{
			if ((g_y == 0 && g_x == 0) || (g_y == y - 1 && g_x == x - 1))
				ft_putchar(g_diag_corners_l);
			else if ((g_y == 0 && g_x == x - 1) || (g_y == y - 1 && g_x == 0))
				ft_putchar(g_diag_corners_r);
			else if (g_x == 0 || g_x == x - 1 || g_y == y - 1 || g_y == 0)
				ft_putchar(g_fillers);
			else
				ft_putchar(g_whitespace);
			g_x++;
		}
		ft_newlin();
	}
}
