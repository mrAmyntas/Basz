/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush02.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/11 15:59:24 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/12 17:54:24 by bguedes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	g_leftcolumn = 'A';
char	g_between = 'B';
char	g_void = ' ';
char	g_rightcolumn = 'C';
char	g_new_linee = 10;
int		g_xt = 0;
int		g_yt = 0;

void	ft_newlinee(void)
{
	ft_putchar(g_new_linee);
	g_xt = 0;
	g_yt++;
}

void	rush03(int x, int y)
{
	while (y > g_yt)
	{
		while (x > g_xt)
		{
			if (g_xt == 0 && (g_yt == 0 || g_yt == y - 1))
			{
				ft_putchar(g_leftcolumn);
			}
			else if (g_xt == x - 1 && (g_yt == 0 || g_yt == y - 1))
			{
				ft_putchar(g_rightcolumn);
			}
			else if (g_xt == 0 || g_xt == x - 1 || g_yt == y - 1 || g_yt == 0)
			{
				ft_putchar(g_between);
			}
			else
			{
				ft_putchar(g_void);
			}
			g_xt++;
		}
		ft_newlinee();
	}
}
