/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 19:46:20 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/19 20:49:34 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == 0)
			return (1);
		if ((str[x] < 48) || (str[x] > 57))
			return (0);
		x++;
	}
	return (1);
}
