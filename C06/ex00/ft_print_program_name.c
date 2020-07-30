/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 14:00:07 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/22 14:32:25 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int narg, char **varg)
{
	int i;

	narg = 1;
	i = 0;
	while (varg[0][i] != '\0')
	{
		write(1, &varg[0][i], 1);
		i++;
	}
	write(1, &"\n", 1);
}
