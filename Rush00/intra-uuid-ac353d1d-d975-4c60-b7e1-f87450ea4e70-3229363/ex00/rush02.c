/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush02.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/11 15:59:24 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/12 16:44:25 by bguedes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	g_top = 'A';
char	g_x_y_char = 'B';
char	g_space = ' ';
char	g_bottom_corners_char = 'C';
char	g_new_line = 10;
int		g_xc = 0;
int		g_yc = 0;

void	ft_newline(void)
{
	ft_putchar(g_new_line);
	g_xc = 0;
	g_yc++;
}

void	rush02(int x, int y)
{
	while (y > g_yc)
	{
		while (x > g_xc)
		{
			if (g_yc == 0 && (g_xc == 0 || g_xc == x - 1))
			{
				ft_putchar(g_top);
			}
			else if (g_yc == y - 1 && (g_xc == 0 || g_xc == x - 1))
			{
				ft_putchar(g_bottom_corners_char);
			}
			else if (g_xc == 0 || g_xc == x - 1 || g_yc == y - 1 || g_yc == 0)
			{
				ft_putchar(g_x_y_char);
			}
			else
			{
				ft_putchar(g_space);
			}
			g_xc++;
		}
		ft_newline();
	}
}
