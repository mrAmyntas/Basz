/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:08:30 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 22:25:04 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "unistd.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		ft_read_stdin();
	while (i < argc)
	{
		ft_readmap(argv[i]);
		if (i != argc - 1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
