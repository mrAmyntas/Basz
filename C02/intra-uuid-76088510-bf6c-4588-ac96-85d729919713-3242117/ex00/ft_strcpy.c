/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   teststringman.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 16:36:51 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/17 17:21:30 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
