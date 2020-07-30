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

void	ft_assign_globals(char *buf, int q)
{
	g_info.rows = ft_rows(buf) + 1;
	g_info.columns = ft_strlen(&buf[q + 1], '\n') + 1;
	g_info.empty = buf[q - 3];
	g_info.block = buf[q - 2];
	g_info.full = buf[q - 1];
}
