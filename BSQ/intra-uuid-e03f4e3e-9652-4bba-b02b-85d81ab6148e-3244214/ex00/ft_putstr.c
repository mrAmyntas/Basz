/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mgroen <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 16:04:25 by mgroen        #+#    #+#                 */
/*   Updated: 2020/07/17 16:31:25 by mgroen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
		c++;
	write(1, str, c);
}
