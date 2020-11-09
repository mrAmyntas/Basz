/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: basz <basz@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 17:18:05 by basz          #+#    #+#                 */
/*   Updated: 2020/11/06 03:40:18 by basz          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buff;
	int				i;
	unsigned int	n;

	if (s == NULL)
		return (NULL);
	buff = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (buff == NULL)
		return (NULL);
	i = 0;
	n = i;
	while (s[i] != '\0')
	{
		buff[i] = f(n, s[i]);
		i++;
		n++;
	}
	buff[i] = '\0';
	return (buff);
}
