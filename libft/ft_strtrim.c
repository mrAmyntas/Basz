/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <bhoitzin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 17:51:15 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/11/08 22:44:14 by basz          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static unsigned int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int			ft_checkprefix(const char *s1, const char *set)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while ((s1[i] != '\0') && (j < ft_strlen(set)))
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				i++;
				break ;
			}
			j++;
		}
	}
	return (i);
}

static int			ft_checksuffix(const char *s1, const char *set)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while ((s1[i] != '\0') && (j < ft_strlen(set)))
	{
		j = 0;
		while (set[j] != '\0')
		{
			if ((s1[i] == set[j]) && (i != 0))
			{
				i--;
				break ;
			}
			j++;
		}
	}
	return (i);
}

static char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*buff;
	unsigned int	i;

	i = ft_strlen(s);
	buff = (char *)malloc(sizeof(char) * (len + 1));
	if ((buff == NULL) || (start >= i))
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

char				*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if ((ft_strlen(set) == 0) || (ft_strlen(s1) == 0))
		return ((char*)s1);
	i = ft_checkprefix(s1, set);
	j = ft_checksuffix(s1, set);
	if (i > j)
		return (ft_substr(s1, 0, 0));
	return (ft_substr(s1, i, (j - i + 1)));
}
