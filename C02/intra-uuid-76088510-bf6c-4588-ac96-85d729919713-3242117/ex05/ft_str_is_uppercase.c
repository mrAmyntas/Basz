/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 20:02:57 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/19 20:51:38 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == 0)
			return (1);
		if ((str[x] < 65) || (str[x] > 90))
			return (0);
		x++;
	}
	return (1);
}
