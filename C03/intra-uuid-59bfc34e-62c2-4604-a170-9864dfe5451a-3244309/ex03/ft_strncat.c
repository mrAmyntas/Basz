/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 16:04:27 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/23 11:02:02 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	while (dest[j] != '\0')
		j++;
	i = 0;
	while ((src[i] != '\0') && (nb != 0))
	{
		dest[j] = src[i];
		i++;
		j++;
		nb--;
	}
	dest[j] = '\0';
	return (dest);
}
