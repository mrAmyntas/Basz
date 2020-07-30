/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 16:36:01 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/23 12:46:49 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
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

char *ft_strdup(char *src)
{
	int i;
	char *cpy;

	i = 0;
	while (src[i] != '\0')
		i++;
	cpy = (char*)malloc(sizeof(*src) * i + 1);
	i = 0;
   	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}


int main(void)
{
	int i;
	char src[] = "n";
	char *cpy;

	cpy = ft_strdup(src);
//	cpy = strdup(src);

	ft_putstr(cpy);
	write(1, "\n", 1);

	return (0);

}

	
