/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 16:39:04 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/20 16:55:32 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}	
}
char *ft_strstr(char *str, char *to_find)
{


}


int main(void)
{
	char str[] = "haystackneedlehaystack";
	char to_find[] = "needle";
	char *returned;

	returned = strstr(str, to_find);	
//	returned = ft_str_str(str, to_find);
	write(1, &returned[0], 1);
}


