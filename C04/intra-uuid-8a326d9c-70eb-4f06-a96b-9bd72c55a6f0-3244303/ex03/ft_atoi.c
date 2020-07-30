/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 16:23:28 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/23 17:16:35 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int x;
	int y;

	i = 0;
	while (str[i] == '\v' || str[i] == '\n' || str[i] == '\f'
			|| str[i] == ' ' || str[i] == '\t' || str[i] == '\r')
		i++;
	x = 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i] == '-')
		{
			x = x * -1;
			i++;
		}
		else
			i++;
	y = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		y = y * 10 + (str[i] - 48);
		i++;
	}
	return (x * y);
}
