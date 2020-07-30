/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 10:30:40 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/24 15:38:18 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int x;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	x = 1;
	while (power > 0)
	{
		x = x * nb;
		power--;
	}
	return (x);
}
