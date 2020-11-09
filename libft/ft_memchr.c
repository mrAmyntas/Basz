/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: basz <basz@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 15:24:33 by basz          #+#    #+#                 */
/*   Updated: 2020/11/03 13:18:25 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*ptr;

	ptr = (unsigned char*)s;
	x = c;
	i = 0;
	if (x == '\0')
	{
		while (n > i)
		{
			if (ptr[i] == x)
				return (&ptr[i]);
			i++;
		}
	}
	while ((ptr[i] != '\0') && (n > i))
	{
		if (ptr[i] == x)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
