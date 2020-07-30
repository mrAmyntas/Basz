/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 14:57:38 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/22 16:33:22 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int narg, char **argv)
{
	int i;
	int j;

	j = narg;
	while (j > 1)
	{
		i = 0;
		while (argv[j - 1][i] != '\0')
		{
			write(1, &argv[j - 1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
}
