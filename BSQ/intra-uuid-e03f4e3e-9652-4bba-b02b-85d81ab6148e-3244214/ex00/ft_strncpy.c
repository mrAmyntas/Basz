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

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	y = 0;
	while (src[y] != '\0')
		y++;
	while (x < n)
	{
		if (x < y)
			dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
