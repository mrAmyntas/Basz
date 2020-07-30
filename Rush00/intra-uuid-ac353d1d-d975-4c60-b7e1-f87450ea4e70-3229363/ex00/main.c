/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/11 15:57:38 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/12 18:24:31 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	rush01(int x, int y);

void	rush02(int x, int y);

void	rush03(int x, int y);

void	rush04(int x, int y);

int		main(void)
{
	char y = 10;
	rush01(3, 4);
	ft_putchar(y);
	rush02(3, 4);
	ft_putchar(y);
	rush03(2, 4);
	ft_putchar(y);
	rush04(3, 4);
	return (0);
}

