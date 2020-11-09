/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <bhoitzin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:56:32 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/10/30 20:55:31 by basz          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	char	*s;
	size_t	i;

	s = str;
	i = 0;
	while (n > i)
	{
		s[i] = '\0';
		i++;
	}
}
