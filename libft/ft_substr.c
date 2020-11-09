/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <bhoitzin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 14:03:03 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/11/08 17:17:36 by basz          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		buff = (char *)malloc(1);
		return (buff);
	}
	buff = (char *)malloc(sizeof(char) * (len + 1));
	if (buff == NULL)
		return (NULL);
	i = 0;
	while ((len > i) && (s[start] != '\0'))
	{
		buff[i] = s[start];
		i++;
		start++;
	}
	buff[i] = '\0';
	return (buff);
}
