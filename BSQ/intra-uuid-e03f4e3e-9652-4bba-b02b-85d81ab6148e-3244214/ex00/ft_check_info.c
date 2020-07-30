/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_info.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 22:16:22 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/30 12:35:48 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "functions.h"
#include <stdio.h>

int		ft_check_info(int q, char *buf)
{
	int i;

	if (buf[q - 1] == buf[q - 2] || buf[q - 1] == buf[q - 3]
			|| buf[q - 2] == buf[q - 3] || q < 4)
		return (ft_error());
//	if (buf[q + 1] == '\0')
//		return (ft_error());
	i = 0;
	while (buf[i] != '\n')
	{
		if ((buf[i] < 32) || (buf[i] > 126))
			return (ft_error());
		i++;
	}
	i = (q + 1);
	while (buf[i] != '\0')
	{
		if (buf[i] != buf[q] && buf[i] != buf[q - 1]
				&& buf[i] != buf[q - 2] && buf[i] != buf[q - 3])
			return (ft_error());
		i++;
	}
	return (0);
}
