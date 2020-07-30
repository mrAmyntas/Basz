/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/13 09:50:24 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/14 10:42:27 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char eersteletter;
	char laatsteletter;

	laatsteletter = 'a';
	eersteletter = 'z';
	while (eersteletter >= laatsteletter)
	{
		write(1, &eersteletter, 1);
		eersteletter--;
	}
}
