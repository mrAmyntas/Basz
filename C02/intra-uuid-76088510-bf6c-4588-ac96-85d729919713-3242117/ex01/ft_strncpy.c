/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   teststringman.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 16:36:51 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/21 15:25:17 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	counter_src(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;
	unsigned int	j;

	j = counter_src(src);
	x = 0;
	while (x != n)
	{
		dest[x] = src[x];
		x++;
	}
	if (!(j >= n))
	{
		while (n >= j)
		{
			dest[n] = '\0';
			n--;
		}
	}
	if (!(j >= n))
		dest[x] = '\0';
	return (dest);
}
