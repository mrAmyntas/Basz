/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 20:32:58 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/24 15:19:39 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int x;

	x = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	nb--;
	x = x * ft_recursive_factorial(nb);
	return (x);
}
