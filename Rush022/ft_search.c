/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_search.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 09:38:27 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/29 13:42:43 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(int i, char *buf)
{
    i++;
	while (buf[i - 1] != 32)
		i++;
	while (buf[i] != 10)
	{
		if (buf[i] >= 32 && buf[i] <= 126)
		write(1, &buf[i], 1);
		i++;
	}
}

void    ft_display_zero(char *buf)
{
	int i;
    i = 0;
	while (buf[i - 1] != 32)
		i++;
    while (buf[i] != 10)
    {
        if (buf[i] >= 32 && buf[i] <= 126)
        write(1, &buf[i], 1);
        i++;
    }
}

int	ft_search(int y, char *str)
{
	int i;
    int x;
    
    x = 0;
	i = 0;
	y--;		
	while (str[i] != '\0')
	{
		if (str[i] == 10)
        {
            if (x == y)
                ft_display(i, str);
            x++;
		}
		i++;
	}
	return (0);
}

