/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_inputarray.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 10:26:52 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/26 21:20:20 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);

char	**ft_create_inputarray(int a, char **argv)
{
	char **inputarray;
	int j;
	int x;
	int y;
	int store;

	store = a;
	y = a / 3;
	if (a % 3 != 0)
		y++;
	inputarray = (char **)malloc(sizeof(char*)*y);
	j = 0;
	while (j != y)
	{
		inputarray[j] = (char*)malloc(sizeof(char)*3);
		x = 0;
		while (x != 3)
		{
			if (store > 2)
			{
				inputarray[j][x] = argv[1][a - 3];
				x++;
				a++;
			}
			if (store == 1)
			{
				inputarray[j][x] = argv[1][0];
				return (inputarray);
			}
			if (store == 2)
			{
				inputarray[j][x] = argv[1][1];
				inputarray[j][x + 1] = argv[1][0];
				return (inputarray);
			}

		}
		a = a - 6;
		j++;
	}
	return (inputarray);
}
	
/*	y = a / 3;
	if (a % 3 != 0)
		y++;
	x = 2;
	while (x != -1)
	{	
		j = y;
		while (j != 0)
		{
			write(1, &inputarray[j - 1][x], 1);
			write(1, &" ", 1);
			j--;
		}	
	write(1, "\n", 1);
	x--;
	}
}
*/
