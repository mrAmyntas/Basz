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

#include <unistd.h>

int		ft_error(void)
{
	write(1, "map error\n", 10);
	return (1);
}