/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 16:04:27 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/20 16:38:38 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int x;
	unsigned int a;
	unsigned int lengthdest;

	i = 0;
	while (dest[i] != '\0')
		i++;
	lengthdest = i;
	x = 0;
	while (src[x] != '\0')
		x++;
	a = 0 - x;
	while ((a != 0) && (nb != 0))
	{
		dest[i] = src[a + x];
		a++;
		nb--;
		i++;
	}
	dest[lengthdest + x] = '\0';
	return (dest);
}
