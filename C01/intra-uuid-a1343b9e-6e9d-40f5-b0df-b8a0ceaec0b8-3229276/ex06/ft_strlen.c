/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 11:55:43 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/16 13:04:46 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}