/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush04.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bguedes <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 16:37:28 by bguedes       #+#    #+#                 */
/*   Updated: 2020/07/12 17:52:14 by bguedes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	g_tl_br = 'A';
char	g_x_y_c = 'B';
char	g_spac = ' ';
char	g_tr_bl = 'C';
char	g_new_lin = 10;
int		g_i = 0;
int		g_j = 0;

void	ft_newli(void)
{
	ft_putchar(g_new_lin);
	g_i = 0;
	g_j++;
}

void	rush04(int x, int y)
{
	while (y > g_j)
	{
		while (x > g_i)
		{
			if ((g_j == 0 || g_i == x - 1) && (g_j == y - 1 || g_i == 0))
			{
				ft_putchar(g_tl_br);
			}
			else if ((g_j == 0 && g_i == x - 1) || (g_j == y - 1 && g_i == 0))
			{
				ft_putchar(g_tr_bl);
			}
			else if (g_i == 0 || g_i == x - 1 || g_j == y - 1 || g_j == 0)
			{
				ft_putchar(g_x_y_c);
			}
			else
			{
				ft_putchar(g_spac);
			}
			g_i++;
		}
		ft_newli();
	}
}
