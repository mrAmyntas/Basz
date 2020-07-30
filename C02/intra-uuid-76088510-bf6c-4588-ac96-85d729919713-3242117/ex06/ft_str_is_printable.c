/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 20:06:28 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/20 17:55:13 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == 0)
			return (1);
		if ((str[x] < 32) || (str[x] > 127))
			return (0);
		x++;
	}
	return (1);
}
