/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 11:38:33 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/16 15:48:21 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}