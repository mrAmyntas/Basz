/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_translate.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:45:03 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/26 22:19:04 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_search(int a, char *buf);
void	ft_display_zero(char *buf);

void	ft_translate_t(char **inputarray, char *buf)
{
	int i;
	int col;

	col = 4;
	i = 0;
	while (i != 3)
	{
		if (i == 0)
		{
			if (inputarray[col][i] == '1' && inputarray[col][2] == '\0' && inputarray[col][1] == '\0')
				ft_search(1, buf);
			if (inputarray[col][i] == '2' && inputarray[col][2] == '\0' && inputarray[col][1] == '\0')
				ft_search(2, buf);
			if (inputarray[col][i] == '3' && inputarray[col][2] == '\0' && inputarray[col][1] == '\0')
				ft_search(3, buf);
			if (inputarray[col][i] == '4' && inputarray[col][2] == '\0' && inputarray[col][1] == '\0')
				ft_search(4, buf);
			if (inputarray[col][i] == '5' && inputarray[col][2] == '\0' && inputarray[col][1] == '\0')
				ft_search(5, buf);
			if (inputarray[col][i] == '6' && inputarray[col][2] == '\0' && inputarray[col][1] == '\0')
				ft_search(6, buf);
			if (inputarray[col][i] == '7' && inputarray[col][2] == '\0' && inputarray[col][1] == '\0')
				ft_search(7, buf);
			if (inputarray[col][i] == '8' && inputarray[col][2] == '\0' && inputarray[col][1] == '\0')
				ft_search(8, buf);
			if (inputarray[col][i] == '9' && inputarray[col][2] == '\0' && inputarray[col][1] == '\0')
				ft_search(9, buf);
		}
		if (i == 0)
		{
			if (inputarray[col][i] == '0' && inputarray[col][2] == '\0' && inputarray[col][1] == '1')
				ft_search(10, buf);
			if (inputarray[col][i] == '1' && inputarray[col][2] == '\0' && inputarray[col][1] == '1')
				ft_search(11, buf);
			if (inputarray[col][i] == '2' && inputarray[col][2] == '\0' && inputarray[col][1] == '1')
				ft_search(12, buf);
			if (inputarray[col][i] == '3' && inputarray[col][2] == '\0' && inputarray[col][1] == '1')
				ft_search(13, buf);
			if (inputarray[col][i] == '4' && inputarray[col][2] == '\0' && inputarray[col][1] == '1')
				ft_search(14, buf);
			if (inputarray[col][i] == '5' && inputarray[col][2] == '\0' && inputarray[col][1] == '1')
				ft_search(15, buf);
			if (inputarray[col][i] == '6' && inputarray[col][2] == '\0' && inputarray[col][1] == '1')
				ft_search(16, buf);
			if (inputarray[col][i] == '7' && inputarray[col][2] == '\0' && inputarray[col][1] == '1')
				ft_search(17, buf);
			if (inputarray[col][i] == '8' && inputarray[col][2] == '\0' && inputarray[col][1] == '1')
				ft_search(18, buf);
			if (inputarray[col][i] == '9' && inputarray[col][2] == '\0' && inputarray[col][1] == '1')
				ft_search(19, buf);
			if (inputarray[col][i] == '0' && inputarray[col][2] == '\0' && inputarray[col][1] == '2')
				ft_search(20, buf);
			if (inputarray[col][i] == '1' && inputarray[col][2] == '\0' && inputarray[col][1] == '2')
			{
				ft_search(20, buf);
				write(1, " ", 1);
				ft_search(1, buf);
			}
			if (inputarray[col][i] == '2' && inputarray[col][2] == '\0' && inputarray[col][1] == '2')
			{
				ft_search(20, buf);
				write(1, " ", 1);
				ft_search(2, buf);
			}
			if (inputarray[col][i] == '3' && inputarray[col][2] == '\0' && inputarray[col][1] == '2')
			{
				ft_search(20, buf);
				write(1, " ", 1);
				ft_search(3, buf);
			}
			if (inputarray[col][i] == '4' && inputarray[col][2] == '\0' && inputarray[col][1] == '2')
			{
				ft_search(20, buf);
				write(1, " ", 1);
				ft_search(4, buf);
			}
			if (inputarray[col][i] == '5' && inputarray[col][2] == '\0' && inputarray[col][1] == '2')
			{
				ft_search(20, buf);
				write(1, " ", 1);
				ft_search(5, buf);
			}
			if (inputarray[col][i] == '6' && inputarray[col][2] == '\0' && inputarray[col][1] == '2')
			{
				ft_search(20, buf);
				write(1, " ", 1);
				ft_search(6, buf);
			}
			if (inputarray[col][i] == '7' && inputarray[col][2] == '\0' && inputarray[col][1] == '2')
			{
				ft_search(20, buf);
				write(1, " ", 1);
				ft_search(7, buf);
			}
			if (inputarray[col][i] == '8' && inputarray[col][2] == '\0' && inputarray[col][1] == '2')
			{
				ft_search(20, buf);
				write(1, " ", 1);
				ft_search(8, buf);
			}
			if (inputarray[col][i] == '9' && inputarray[col][2] == '\0' && inputarray[col][1] == '2')
			{
				ft_search(20, buf);
				write(1, " ", 1);
				ft_search(9, buf);
			}
			if (inputarray[col][i] == '0' && inputarray[col][2] == '\0' && inputarray[col][1] == '3')
				ft_search(21, buf);
			if (inputarray[col][i] == '1' && inputarray[col][2] == '\0' && inputarray[col][1] == '3')
			{
				ft_search(21, buf);
				write(1, " ", 1);
				ft_search(1, buf);
			}
			if (inputarray[col][i] == '2' && inputarray[col][2] == '\0' && inputarray[col][1] == '3')
			{
				ft_search(21, buf);
				write(1, " ", 1);
				ft_search(2, buf);
			}
			if (inputarray[col][i] == '3' && inputarray[col][2] == '\0' && inputarray[col][1] == '3')
			{
				ft_search(21, buf);
				write(1, " ", 1);
				ft_search(3, buf);
			}
			if (inputarray[col][i] == '4' && inputarray[col][2] == '\0' && inputarray[col][1] == '3')
			{
				ft_search(21, buf);
				write(1, " ", 1);
				ft_search(4, buf);
			}
			if (inputarray[col][i] == '5' && inputarray[col][2] == '\0' && inputarray[col][1] == '3')
			{
				ft_search(21, buf);
				write(1, " ", 1);
				ft_search(5, buf);
			}
			if (inputarray[col][i] == '6' && inputarray[col][2] == '\0' && inputarray[col][1] == '3')
			{
				ft_search(21, buf);
			write(1, " ", 1);
				ft_search(6, buf);
			}
			if (inputarray[col][i] == '7' && inputarray[col][2] == '\0' && inputarray[col][1] == '3')
			{
				ft_search(21, buf);
				write(1, " ", 1);
				ft_search(7, buf);
			}
			if (inputarray[col][i] == '8' && inputarray[col][2] == '\0' && inputarray[col][1] == '3')
			{
				ft_search(21, buf);
				write(1, " ", 1);
				ft_search(8, buf);
			}
			if (inputarray[col][i] == '9' && inputarray[col][2] == '\0' && inputarray[col][1] == '3')
			{
				ft_search(21, buf);
				write(1, " ", 1);
				ft_search(9, buf);
			}
			if (inputarray[col][i] == '0' && inputarray[col][2] == '\0' && inputarray[col][1] == '4')
				ft_search(22, buf);
			if (inputarray[col][i] == '1' && inputarray[col][2] == '\0' && inputarray[col][1] == '4')
			{
				ft_search(22, buf);
				write(1, " ", 1);
				ft_search(1, buf);
			}
			if (inputarray[col][i] == '2' && inputarray[col][2] == '\0' && inputarray[col][1] == '4')
			{
				ft_search(22, buf);
				write(1, " ", 1);
				ft_search(2, buf);
			}
			if (inputarray[col][i] == '3' && inputarray[col][2] == '\0' && inputarray[col][1] == '4')
			{
				ft_search(22, buf);
				write(1, " ", 1);
				ft_search(3, buf);
			}
			if (inputarray[col][i] == '4' && inputarray[col][2] == '\0' && inputarray[col][1] == '4')
			{
				ft_search(22, buf);
				write(1, " ", 1);
				ft_search(4, buf);
			}
			if (inputarray[col][i] == '5' && inputarray[col][2] == '\0' && inputarray[col][1] == '4')
			{
				ft_search(22, buf);
				write(1, " ", 1);
				ft_search(5, buf);
			}
			if (inputarray[col][i] == '6' && inputarray[col][2] == '\0' && inputarray[col][1] == '4')
			{
				ft_search(22, buf);
				write(1, " ", 1);
				ft_search(6, buf);
			}
			if (inputarray[col][i] == '7' && inputarray[col][2] == '\0' && inputarray[col][1] == '4')
			{
				ft_search(22, buf);
				write(1, " ", 1);
				ft_search(7, buf);
			}
			if (inputarray[col][i] == '8' && inputarray[col][2] == '\0' && inputarray[col][1] == '4')
			{
				ft_search(22, buf);
				write(1, " ", 1);
				ft_search(8, buf);
			}
			if (inputarray[col][i] == '9' && inputarray[col][2] == '\0' && inputarray[col][1] == '4')
			{
				ft_search(22, buf);
				write(1, " ", 1);
				ft_search(9, buf);
			}
			if (inputarray[col][i] == '0' && inputarray[col][2] == '\0' && inputarray[col][1] == '5')
				ft_search(23, buf);
			if (inputarray[col][i] == '1' && inputarray[col][2] == '\0' && inputarray[col][1] == '5')
			{
				ft_search(23, buf);
				write(1, " ", 1);
				ft_search(1, buf);
			}
			if (inputarray[col][i] == '2' && inputarray[col][2] == '\0' && inputarray[col][1] == '5')
			{
				ft_search(23, buf);
				write(1, " ", 1);
				ft_search(2, buf);
			}
			if (inputarray[col][i] == '3' && inputarray[col][2] == '\0' && inputarray[col][1] == '5')
			{
				ft_search(23, buf);
				write(1, " ", 1);
				ft_search(3, buf);
			}
			if (inputarray[col][i] == '4' && inputarray[col][2] == '\0' && inputarray[col][1] == '5')
			{
				ft_search(23, buf);
				write(1, " ", 1);
				ft_search(4, buf);
			}
			if (inputarray[col][i] == '5' && inputarray[col][2] == '\0' && inputarray[col][1] == '5')
			{
				ft_search(23, buf);
				write(1, " ", 1);
				ft_search(5, buf);
			}
			if (inputarray[col][i] == '6' && inputarray[col][2] == '\0' && inputarray[col][1] == '5')
			{
				ft_search(23, buf);
				write(1, " ", 1);
				ft_search(6, buf);
			}
			if (inputarray[col][i] == '7' && inputarray[col][2] == '\0' && inputarray[col][1] == '5')
			{
				ft_search(23, buf);
				write(1, " ", 1);
				ft_search(7, buf);
			}
			if (inputarray[col][i] == '8' && inputarray[col][2] == '\0' && inputarray[col][1] == '5')
			{
				ft_search(23, buf);
				write(1, " ", 1);
				ft_search(8, buf);
			}
			if (inputarray[col][i] == '9' && inputarray[col][2] == '\0' && inputarray[col][1] == '5')
			{
				ft_search(23, buf);
				write(1, " ", 1);
				ft_search(9, buf);
			}
			if (inputarray[col][i] == '0' && inputarray[col][2] == '\0' && inputarray[col][1] == '6')
				ft_search(24, buf);
			if (inputarray[col][i] == '1' && inputarray[col][2] == '\0' && inputarray[col][1] == '6')
			{
				ft_search(24, buf);
				write(1, " ", 1);
				ft_search(1, buf);
			}
			if (inputarray[col][i] == '2' && inputarray[col][2] == '\0' && inputarray[col][1] == '6')
			{
				ft_search(24, buf);
				write(1, " ", 1);
				ft_search(2, buf);
			}
			if (inputarray[col][i] == '3' && inputarray[col][2] == '\0' && inputarray[col][1] == '6')
			{
				ft_search(24, buf);
				write(1, " ", 1);
				ft_search(3, buf);
			}
			if (inputarray[col][i] == '4' && inputarray[col][2] == '\0' && inputarray[col][1] == '6')
			{
				ft_search(24, buf);
				write(1, " ", 1);
				ft_search(4, buf);
			}
			if (inputarray[col][i] == '5' && inputarray[col][2] == '\0' && inputarray[col][1] == '6')
			{
				ft_search(24, buf);
				write(1, " ", 1);
				ft_search(5, buf);
			}
			if (inputarray[col][i] == '6' && inputarray[col][2] == '\0' && inputarray[col][1] == '6')
			{
				ft_search(24, buf);
				write(1, " ", 1);
				ft_search(6, buf);
			}
			if (inputarray[col][i] == '7' && inputarray[col][2] == '\0' && inputarray[col][1] == '6')
			{
				ft_search(24, buf);
				write(1, " ", 1);
				ft_search(7, buf);
			}
			if (inputarray[col][i] == '8' && inputarray[col][2] == '\0' && inputarray[col][1] == '6')
			{
				ft_search(24, buf);
				write(1, " ", 1);
				ft_search(8, buf);
			}
			if (inputarray[col][i] == '9' && inputarray[col][2] == '\0' && inputarray[col][1] == '6')
			{
				ft_search(24, buf);
				write(1, " ", 1);
				ft_search(9, buf);
			}
			if (inputarray[col][i] == '0' && inputarray[col][2] == '\0' && inputarray[col][1] == '7')
				ft_search(25, buf);
			if (inputarray[col][i] == '1' && inputarray[col][2] == '\0' && inputarray[col][1] == '7')
			{
				ft_search(25, buf);
				write(1, " ", 1);
				ft_search(1, buf);
			}
			if (inputarray[col][i] == '2' && inputarray[col][2] == '\0' && inputarray[col][1] == '7')
			{
				ft_search(25, buf);
				write(1, " ", 1);
				ft_search(2, buf);
			}
			if (inputarray[col][i] == '3' && inputarray[col][2] == '\0' && inputarray[col][1] == '7')
			{
				ft_search(25, buf);
				write(1, " ", 1);
				ft_search(3, buf);
			}
			if (inputarray[col][i] == '4' && inputarray[col][2] == '\0' && inputarray[col][1] == '7')
			{
				ft_search(25, buf);
				write(1, " ", 1);
				ft_search(4, buf);
			}
			if (inputarray[col][i] == '5' && inputarray[col][2] == '\0' && inputarray[col][1] == '7')
			{
				ft_search(25, buf);
				write(1, " ", 1);
				ft_search(5, buf);
			}
			if (inputarray[col][i] == '6' && inputarray[col][2] == '\0' && inputarray[col][1] == '7')
			{
				ft_search(25, buf);
				write(1, " ", 1);
				ft_search(6, buf);
			}
			if (inputarray[col][i] == '7' && inputarray[col][2] == '\0' && inputarray[col][1] == '7')
			{
				ft_search(25, buf);
				write(1, " ", 1);
				ft_search(7, buf);
			}
			if (inputarray[col][i] == '8' && inputarray[col][2] == '\0' && inputarray[col][1] == '7')
			{
				ft_search(25, buf);
				write(1, " ", 1);
				ft_search(8, buf);
			}
			if (inputarray[col][i] == '9' && inputarray[col][2] == '\0' && inputarray[col][1] == '7')
			{
				ft_search(25, buf);
				write(1, " ", 1);
				ft_search(9, buf);
			}
			if (inputarray[col][i] == '0' && inputarray[col][2] == '\0' && inputarray[col][1] == '8')
				ft_search(26, buf);
			if (inputarray[col][i] == '1' && inputarray[col][2] == '\0' && inputarray[col][1] == '8')
			{
				ft_search(26, buf);
				write(1, " ", 1);
				ft_search(1, buf);
			}
			if (inputarray[col][i] == '2' && inputarray[col][2] == '\0' && inputarray[col][1] == '8')
			{
				ft_search(26, buf);
				write(1, " ", 1);
				ft_search(2, buf);
			}
			if (inputarray[col][i] == '3' && inputarray[col][2] == '\0' && inputarray[col][1] == '8')
			{
				ft_search(26, buf);
				write(1, " ", 1);
				ft_search(3, buf);
			}
			if (inputarray[col][i] == '4' && inputarray[col][2] == '\0' && inputarray[col][1] == '8')
			{
				ft_search(26, buf);
				write(1, " ", 1);
				ft_search(4, buf);
			}
			if (inputarray[col][i] == '5' && inputarray[col][2] == '\0' && inputarray[col][1] == '8')
			{
				ft_search(26, buf);
				write(1, " ", 1);
				ft_search(5, buf);
			}
			if (inputarray[col][i] == '6' && inputarray[col][2] == '\0' && inputarray[col][1] == '8')
			{
				ft_search(26, buf);
				write(1, " ", 1);
				ft_search(6, buf);
			}
			if (inputarray[col][i] == '7' && inputarray[col][2] == '\0' && inputarray[col][1] == '8')
			{
				ft_search(26, buf);
				write(1, " ", 1);
				ft_search(7, buf);
			}
			if (inputarray[col][i] == '8' && inputarray[col][2] == '\0' && inputarray[col][1] == '8')
			{
				ft_search(26, buf);
				write(1, " ", 1);
				ft_search(8, buf);
			}
			if (inputarray[col][i] == '9' && inputarray[col][2] == '\0' && inputarray[col][1] == '8')
			{
				ft_search(26, buf);
				write(1, " ", 1);
				ft_search(9, buf);
			}
			if (inputarray[col][i] == '0' && inputarray[col][2] == '\0' && inputarray[col][1] == '9')
				ft_search(27, buf);
			if (inputarray[col][i] == '1' && inputarray[col][2] == '\0' && inputarray[col][1] == '9')
			{
				ft_search(27, buf);
				write(1, " ", 1);
				ft_search(1, buf);
			}
			if (inputarray[col][i] == '2' && inputarray[col][2] == '\0' && inputarray[col][1] == '9')
			{
				ft_search(27, buf);
				write(1, " ", 1);
				ft_search(2, buf);
			}
			if (inputarray[col][i] == '3' && inputarray[col][2] == '\0' && inputarray[col][1] == '9')
			{
				ft_search(27, buf);
				write(1, " ", 1);
				ft_search(3, buf);
			}
			if (inputarray[col][i] == '4' && inputarray[col][2] == '\0' && inputarray[col][1] == '9')
			{
				ft_search(27, buf);
				write(1, " ", 1);
				ft_search(4, buf);
			}
			if (inputarray[col][i] == '5' && inputarray[col][2] == '\0' && inputarray[col][1] == '9')
			{
				ft_search(27, buf);
				write(1, " ", 1);
				ft_search(5, buf);
			}
			if (inputarray[col][i] == '6' && inputarray[col][2] == '\0' && inputarray[col][1] == '9')
			{
				ft_search(27, buf);
				write(1, " ", 1);
				ft_search(6, buf);
			}
			if (inputarray[col][i] == '7' && inputarray[col][2] == '\0' && inputarray[col][1] == '9')
			{
				ft_search(27, buf);
				write(1, " ", 1);
				ft_search(7, buf);
			}
			if (inputarray[col][i] == '8' && inputarray[col][2] == '\0' && inputarray[col][1] == '9')
			{
				ft_search(27, buf);
				write(1, " ", 1);
				ft_search(8, buf);
			}
			if (inputarray[col][i] == '9' && inputarray[col][2] == '\0' && inputarray[col][1] == '9')
			{
				ft_search(27, buf);
				write(1, " ", 1);
				ft_search(9, buf);
			}
		}

		if (i == 0)
		{
			if (inputarray[col][i] == '1' && inputarray[col][2] != '\0' && inputarray[col][1] != '\0')
				ft_search(1, buf);
			if (inputarray[col][i] == '2' && inputarray[col][2] != '\0')
				ft_search(2, buf);
			if (inputarray[col][i] == '3' && inputarray[col][2] != '\0')
				ft_search(3, buf);
			if (inputarray[col][i] == '4' && inputarray[col][2] != '\0')
				ft_search(4, buf);
			if (inputarray[col][i] == '5' && inputarray[col][2] != '\0')
				ft_search(5, buf);
			if (inputarray[col][i] == '6' && inputarray[col][2] != '\0')
				ft_search(6, buf);
			if (inputarray[col][i] == '7' && inputarray[col][2] != '\0')		
				ft_search(7, buf);
			if (inputarray[col][i] == '8' && inputarray[col][2] != '\0')	
				ft_search(8, buf);
			if (inputarray[col][i] == '9' && inputarray[col][2] != '\0')		
				ft_search(9, buf);
			if (inputarray[col][i] != '0' && inputarray[col][2] != '\0')
			{
				write(1, " ", 1);
				ft_search(28, buf);
				write(1, " ", 1);
				if (inputarray[col][i + 1] == '1' && inputarray[col][i + 2] == '0')
					ft_search(10, buf);
			}
			if (inputarray[col][i] == '0' && inputarray[col][i + 1] == '\0' && inputarray[col][i + 2] == '\0')
				ft_display_zero(buf);
		}
		
		if (i == 1)	
		{
			if (inputarray[col][i] == '0')
			{
				if (inputarray[col][i + 1] == '1')
				{
					ft_search(1, buf);
				}
				if (inputarray[col][i + 1] == '2')
				{
					ft_search(2, buf);
				}
				if (inputarray[col][i + 1] == '3')
				{
					ft_search(3, buf);
				}
				if (inputarray[col][i + 1] == '4')
				{
					ft_search(4, buf);
				}
				if (inputarray[col][i + 1] == '5')
				{
					ft_search(5, buf);
				}
				if (inputarray[col][i + 1] == '6')
				{
					ft_search(6, buf);
				}
				if (inputarray[col][i + 1] == '7')
				{
					ft_search(7, buf);
				}
				if (inputarray[col][i + 1] == '8')
				{
					ft_search(8, buf);
				}
				if (inputarray[col][i + 1] == '9')
				{
					ft_search(9, buf);
				}
			}
		}
		if (i == 1)
		{
			if (inputarray[col][i] != '1')
			{
				if (inputarray[col][i] == '2')	
				{
					if (inputarray[col][i + 1] == '0')
					{
						ft_search(20, buf);
					}
					if (inputarray[col][i + 1] == '1')
					{
						ft_search(20, buf);
						write(1, " ", 1);
						ft_search(1, buf);
					}
					if (inputarray[col][i + 1] == '2')
					{
						ft_search(20, buf);
						write(1, " ", 1);
						ft_search(2, buf);
					}
					if (inputarray[col][i + 1] == '3')
					{
						ft_search(20, buf);
						write(1, " ", 1);
						ft_search(3, buf);
					}
					if (inputarray[col][i + 1] == '4')
					{
						ft_search(20, buf);
						write(1, " ", 1);
						ft_search(4, buf);
					}
					if (inputarray[col][i + 1] == '5')
					{
						ft_search(20, buf);
						write(1, " ", 1);
						ft_search(5, buf);
					}
					if (inputarray[col][i + 1] == '6')
					{
						ft_search(20, buf);
						write(1, " ", 1);
						ft_search(6, buf);
					}
					if (inputarray[col][i + 1] == '7')
					{
						ft_search(20, buf);
						write(1, " ", 1);
						ft_search(7, buf);
					}
					if (inputarray[col][i + 1] == '8')
					{
						ft_search(20, buf);
						write(1, " ", 1);
						ft_search(8, buf);
					}
					if (inputarray[col][i + 1] == '9')
					{
						ft_search(20, buf);
						write(1, " ", 1);
						ft_search(9, buf);
					}
				}
			}
			if (inputarray[col][i] == '3') 
				{
					if (inputarray[col][i + 1] == '0')
					{
						ft_search(21, buf);
					}
					if (inputarray[col][i + 1] == '1')
					{
						ft_search(21, buf);
						write(1, " ", 1);
						ft_search(1, buf);
					}
					if (inputarray[col][i + 1] == '2')
					{
						ft_search(21, buf);
						write(1, " ", 1);
						ft_search(2, buf);
					}
					if (inputarray[col][i + 1] == '3')
					{
						ft_search(21, buf);
						write(1, " ", 1);
						ft_search(3, buf);
					}
					if (inputarray[col][i + 1] == '4')
					{
						ft_search(21, buf);
						write(1, " ", 1);
						ft_search(4, buf);
					}
					if (inputarray[col][i + 1] == '5')
					{
						ft_search(21, buf);
						write(1, " ", 1);
						ft_search(5, buf);
					}
					if (inputarray[col][i + 1] == '6')
					{
						ft_search(21, buf);
						write(1, " ", 1);
						ft_search(6, buf);
					}
					if (inputarray[col][i + 1] == '7')
					{
						ft_search(21, buf);
						write(1, " ", 1);
						ft_search(7, buf);
					}
					if (inputarray[col][i + 1] == '8')
					{
						ft_search(21, buf);
						write(1, " ", 1);
						ft_search(8, buf);
					}
					if (inputarray[col][i + 1] == '9')
					{
						ft_search(21, buf);
						write(1, " ", 1);
						ft_search(9, buf);
					}
				}
				if (inputarray[col][i] == '4') 
				{
					if (inputarray[col][i + 1] == '0')
					{
						ft_search(22, buf);
					}

					if (inputarray[col][i + 1] == '1')
					{
						ft_search(22, buf);
						write(1, " ", 1);
						ft_search(1, buf);
					}
					if (inputarray[col][i + 1] == '2')
					{
						ft_search(22, buf);
						write(1, " ", 1);
						ft_search(2, buf);
					}
					if (inputarray[col][i + 1] == '3')
					{
						ft_search(22, buf);
						write(1, " ", 1);
						ft_search(3, buf);
					}
					if (inputarray[col][i + 1] == '4')
					{
						ft_search(22, buf);
						write(1, " ", 1);
						ft_search(4, buf);
					}
					if (inputarray[col][i + 1] == '5')
					{
						ft_search(22, buf);
						write(1, " ", 1);
						ft_search(5, buf);
					}
					if (inputarray[col][i + 1] == '6')
					{
						ft_search(22, buf);
						write(1, " ", 1);
						ft_search(6, buf);
					}
					if (inputarray[col][i + 1] == '7')
					{
						ft_search(22, buf);
						write(1, " ", 1);
						ft_search(7, buf);
					}
					if (inputarray[col][i + 1] == '8')
					{
						ft_search(22, buf);
						write(1, " ", 1);
						ft_search(8, buf);
					}
					if (inputarray[col][i + 1] == '9')
					{
						ft_search(22, buf);
						write(1, " ", 1);
						ft_search(9, buf);
					}
				}
				if (inputarray[col][i] == '5') 
				{
					if (inputarray[col][i + 1] == '0')
					{
						ft_search(23, buf);
					}
					if (inputarray[col][i + 1] == '1')
					{
						ft_search(23, buf);
						write(1, " ", 1);
						ft_search(1, buf);
					}
					if (inputarray[col][i + 1] == '2')
					{
						ft_search(23, buf);
						write(1, " ", 1);
						ft_search(2, buf);
					}
					if (inputarray[col][i + 1] == '3')
					{
						ft_search(23, buf);
						write(1, " ", 1);
						ft_search(3, buf);
					}
					if (inputarray[col][i + 1] == '4')
					{
						ft_search(23, buf);
						write(1, " ", 1);
						ft_search(4, buf);
					}
					if (inputarray[col][i + 1] == '5')
					{
						ft_search(23, buf);
						write(1, " ", 1);
						ft_search(5, buf);
					}
					if (inputarray[col][i + 1] == '6')
					{
						ft_search(23, buf);
						write(1, " ", 1);
						ft_search(6, buf);
					}
					if (inputarray[col][i + 1] == '7')
					{
						ft_search(23, buf);
						write(1, " ", 1);
						ft_search(7, buf);
					}
					if (inputarray[col][i + 1] == '8')
					{
						ft_search(23, buf);
						write(1, " ", 1);
						ft_search(8, buf);
					}
					if (inputarray[col][i + 1] == '9')
					{
						ft_search(23, buf);
						write(1, " ", 1);
						ft_search(9, buf);
					}
				}
				if (inputarray[col][i] == '6') 
				{
					if (inputarray[col][i + 1] == '0')
					{
						ft_search(24, buf);
					}
					if (inputarray[col][i + 1] == '1')
					{
						ft_search(24, buf);
						write(1, " ", 1);
						ft_search(1, buf);
					}
					if (inputarray[col][i + 1] == '2')
					{
						ft_search(24, buf);
						write(1, " ", 1);
						ft_search(2, buf);
					}
					if (inputarray[col][i + 1] == '3')
					{
						ft_search(24, buf);
						write(1, " ", 1);
						ft_search(3, buf);
					}
					if (inputarray[col][i + 1] == '4')
					{
						ft_search(24, buf);
						write(1, " ", 1);
						ft_search(4, buf);
					}
					if (inputarray[col][i + 1] == '5')
					{
						ft_search(24, buf);
						write(1, " ", 1);
						ft_search(5, buf);
					}
					if (inputarray[col][i + 1] == '6')
					{
						ft_search(24, buf);
						write(1, " ", 1);
						ft_search(6, buf);
					}
					if (inputarray[col][i + 1] == '7')
					{
						ft_search(24, buf);
						write(1, " ", 1);
						ft_search(7, buf);
					}
					if (inputarray[col][i + 1] == '8')
					{
						ft_search(24, buf);
						write(1, " ", 1);
						ft_search(8, buf);
					}
					if (inputarray[col][i + 1] == '9')
					{
						ft_search(24, buf);
						write(1, " ", 1);
						ft_search(9, buf);
					}
				}
				if (inputarray[col][i] == '7') 
				{
					if (inputarray[col][i + 1] == '0')
					{
						ft_search(25, buf);
					}
					if (inputarray[col][i + 1] == '1')
					{
						ft_search(25, buf);
						write(1, " ", 1);
						ft_search(1, buf);
					}
					if (inputarray[col][i + 1] == '2')
					{
						ft_search(25, buf);
						write(1, " ", 1);
						ft_search(2, buf);
					}
					if (inputarray[col][i + 1] == '3')
					{
						ft_search(25, buf);
						write(1, " ", 1);
						ft_search(3, buf);
					}
					if (inputarray[col][i + 1] == '4')
					{
						ft_search(25, buf);
						write(1, " ", 1);
						ft_search(4, buf);
					}
					if (inputarray[col][i + 1] == '5')
					{
						ft_search(25, buf);
						write(1, " ", 1);
						ft_search(5, buf);
					}
					if (inputarray[col][i + 1] == '6')
					{
						ft_search(25, buf);
						write(1, " ", 1);
						ft_search(6, buf);
					}
					if (inputarray[col][i + 1] == '7')
					{
						ft_search(25, buf);
						write(1, " ", 1);
						ft_search(7, buf);
					}
					if (inputarray[col][i + 1] == '8')
					{
						ft_search(25, buf);
						write(1, " ", 1);
						ft_search(8, buf);
					}
					if (inputarray[col][i + 1] == '9')
					{
						ft_search(25, buf);
						write(1, " ", 1);
						ft_search(9, buf);
					}
				}
				if (inputarray[col][i] == '8') 
				{
					if (inputarray[col][i + 1] == '0')
					{
						ft_search(26, buf);
					}
					if (inputarray[col][i + 1] == '1')
					{
						ft_search(26, buf);
						write(1, " ", 1);
						ft_search(1, buf);
					}
					if (inputarray[col][i + 1] == '2')
					{
						ft_search(26, buf);
						write(1, " ", 1);
						ft_search(2, buf);
					}
					if (inputarray[col][i + 1] == '3')
					{
						ft_search(26, buf);
						write(1, " ", 1);
						ft_search(3, buf);
					}
					if (inputarray[col][i + 1] == '4')
					{
						ft_search(26, buf);
						write(1, " ", 1);
						ft_search(4, buf);
					}
					if (inputarray[col][i + 1] == '5')
					{
						ft_search(26, buf);
						write(1, " ", 1);
						ft_search(5, buf);
					}
					if (inputarray[col][i + 1] == '6')
					{
						ft_search(26, buf);
						write(1, " ", 1);
						ft_search(6, buf);
					}
					if (inputarray[col][i + 1] == '7')
					{
						ft_search(26, buf);
						write(1, " ", 1);
						ft_search(7, buf);
					}
					if (inputarray[col][i + 1] == '8')
					{
						ft_search(26, buf);
						write(1, " ", 1);
						ft_search(8, buf);
					}
					if (inputarray[col][i + 1] == '9')
					{
						ft_search(26, buf);
						write(1, " ", 1);
						ft_search(9, buf);
					}
				}
				if (inputarray[col][i] == '9') 
				{
					if (inputarray[col][i + 1] == '0')
					{
						ft_search(27, buf);
					}
					if (inputarray[col][i + 1] == '1')
					{
						ft_search(27, buf);
						write(1, " ", 1);
						ft_search(1, buf);
					}
					if (inputarray[col][i + 1] == '2')
					{
						ft_search(27, buf);
						write(1, " ", 1);
						ft_search(2, buf);
					}
					if (inputarray[col][i + 1] == '3')
					{
						ft_search(27, buf);
						write(1, " ", 1);
						ft_search(3, buf);
					}
					if (inputarray[col][i + 1] == '4')
					{
						ft_search(27, buf);
						write(1, " ", 1);
						ft_search(4, buf);
					}
					if (inputarray[col][i + 1] == '5')
					{
						ft_search(27, buf);
						write(1, " ", 1);
						ft_search(5, buf);
					}
					if (inputarray[col][i + 1] == '6')
					{
						ft_search(27, buf);
						write(1, " ", 1);
						ft_search(6, buf);
					}
					if (inputarray[col][i + 1] == '7')
					{
						ft_search(27, buf);
						write(1, " ", 1);
						ft_search(7, buf);
					}
					if (inputarray[col][i + 1] == '8')
					{
						ft_search(27, buf);
						write(1, " ", 1);
						ft_search(8, buf);
					}
					if (inputarray[col][i + 1] == '9')
					{
						ft_search(27, buf);
						write(1, " ", 1);
						ft_search(9, buf);
					}
				}
			}
		
		if (i == 2)
		{
			if (inputarray[col][i - 1] == '1')
			{
				if (inputarray[col][i] == '1')
					ft_search(11, buf);
				if (inputarray[col][i] == '2')
					ft_search(12, buf);
				if (inputarray[col][i] == '3')
					ft_search(13, buf);
				if (inputarray[col][i] == '4')
					ft_search(14, buf);
				if (inputarray[col][i] == '5')
					ft_search(15, buf);
				if (inputarray[col][i] == '6')
					ft_search(16, buf);
				if (inputarray[col][i] == '7')
					ft_search(17, buf);
				if (inputarray[col][i] == '8')
					ft_search(18, buf);
				if (inputarray[col][i] == '9')
					ft_search(19, buf);
			}
	


		}
		i++;
	}
	write(1, " ", 1);
	ft_search(32, buf);
	write(1, " ", 1);
}

