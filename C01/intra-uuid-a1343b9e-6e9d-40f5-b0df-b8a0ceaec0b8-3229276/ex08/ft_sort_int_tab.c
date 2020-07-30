/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 13:38:30 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/16 14:15:18 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

void ft_sort_int_tab(int *tab, int size)
{
	int x;
	
	size = 3;
	tab[0] = 14;
	tab[1] = 38;
	tab[2] = 7;
		
	x = 0;
	while (x < size - 1)
	{
		if (tab[x] < tab[x + 1])
			ft_swap(tab[0], *(tab + x + 1));
	x++;
	}
}

int main(void)
{
	int tab[3];
	int size;

	size = 3;
	tab[0] = 14;
	tab[1] = 5;
	tab[2] = 7;
	
	ft_sort_int_tab(tab, size);
	printf("%d %d %d\n", tab[0], tab[1], tab[2]);
}

