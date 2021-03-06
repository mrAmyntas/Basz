/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 20:37:42 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/19 21:21:28 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 122) && (str[i] >= 97))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
