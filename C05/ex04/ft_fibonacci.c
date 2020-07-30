/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 12:09:39 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/24 17:44:08 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int x;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	else
		index--;
	x = (ft_fibonacci(index) + ft_fibonacci(index - 1));
	return (x);
}
