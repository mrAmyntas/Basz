/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: basz <basz@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 22:40:38 by basz          #+#    #+#                 */
/*   Updated: 2020/11/03 13:21:31 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

static void	ft_bzero(void *str, size_t n)
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

void		*ft_calloc(size_t nmemb, size_t size)
{
	int *ptr;

	if (nmemb * size > INT_MAX)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return ((int*)ptr);
}
