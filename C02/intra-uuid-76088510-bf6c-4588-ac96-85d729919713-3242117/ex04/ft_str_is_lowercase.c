/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 19:54:29 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/19 20:50:58 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == 0)
			return (1);
		if ((str[x] < 97) || (str[x] > 122))
			return (0);
		x++;
	}
	return (1);
}
