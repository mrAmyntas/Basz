/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 10:45:15 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/24 15:43:53 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int x;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	x = nb;
	power--;
	x = x * ft_recursive_power(nb, power);
	return (x);
}
