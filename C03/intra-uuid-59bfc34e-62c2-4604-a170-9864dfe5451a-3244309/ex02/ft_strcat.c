/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 15:30:45 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/20 16:03:58 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int x;
	int a;

	i = 0;
	while (dest[i] != '\0')
		i++;
	x = 0;
	while (src[x] != '\0')
		x++;
	a = x;
	while (x != 0)
	{
		dest[i + x - 1] = src[x - 1];
		x--;
	}
	dest[i + a] = '\0';
	return (dest);
}
