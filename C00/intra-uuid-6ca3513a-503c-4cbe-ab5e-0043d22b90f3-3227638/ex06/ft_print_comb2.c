/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 10:59:46 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/15 16:54:24 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_characters(int a, int b, int c, int d);

void	ft_loop_a_b_c_d(int a, int b, int c, int d);

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	ft_loop_a_b_c_d(a, b, c, d);
}

void	ft_print_characters(int a, int b, int c, int d)
{
	if ((10 * a + b) < 10 * c + d)
	{
		if (!(a == c && b == d))
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &" ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			if (!(a == '9' && b == '8' && c == '9' && d == '9'))
				write(1, &", ", 2);
		}
	}
}

void	ft_loop_a_b_c_d(int a, int b, int c, int d)
{
	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					ft_print_characters(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
