/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 13:06:41 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/16 14:14:57 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int b;
	int store_value;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		store_value = tab[a];
		tab[a] = tab[b];
		tab[b] = store_value;
		a++;
		b--;
	}
}
