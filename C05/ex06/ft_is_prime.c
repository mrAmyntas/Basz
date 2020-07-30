/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 12:45:07 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/24 19:22:18 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i < (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	printf("%d\n", i);
	return (1);
}
int main(void)
{
printf("%d\n", ft_is_prime(2147483646));
}
