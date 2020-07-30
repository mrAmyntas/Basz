/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   putstr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 11:27:48 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/26 11:07:14 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putstr(char *str)
{
    int index;

    index = 0;

    while (str[index] != '\0')
    {
        write(1, &str[index], 1);
        index++;
    }
}
