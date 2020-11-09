/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: basz <basz@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 16:02:37 by basz          #+#    #+#                 */
/*   Updated: 2020/11/06 20:42:26 by basz          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while ((((unsigned char*)s1)[i] == ((unsigned char*)s2)[i]) && (n - 1 > i))
		i++;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
