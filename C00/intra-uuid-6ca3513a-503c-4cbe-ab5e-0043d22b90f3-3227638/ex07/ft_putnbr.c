/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 15:57:04 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/15 17:50:46 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb)
{
	int nbArray[10];
	int x1;
	int x2;
	int x3;
	int a;
	int digit;
	int asciiconvert;
	int modulo;

	digit = 1;
	asciiconvert = 48;
	modulo = 10;

	x1 = nb % modulo / digit + asciiconvert;
	
	modulo = modulo * 10;
	digit = digit * 10;

	x2 = nb % modulo / digit  + asciiconvert;

	x3 = nb % 1000 / 100 + 48;

	write(1, &x3, 1);
	write(1, &x2, 1);
	write(1, &x1, 1);

	write(1, &nbArray[0], 4);
}


