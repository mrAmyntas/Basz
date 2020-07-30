/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 19:31:09 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/24 15:04:17 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int x;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	x = 1;
	while (nb != 0)
	{
		x = x * nb;
		nb--;
	}
	return (x);
}
