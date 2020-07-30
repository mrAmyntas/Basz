/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 14:09:42 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/23 14:59:47 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int i;

	if (min >= max)
		return (0);
	i = min;
	while (i != max)
		i++;
	array = (int*)malloc(sizeof(int) * i + 1);
	array = range[0];
	return (i);
}


int main(void)
{
	int min;
	int max;
	int **range[0][4];
	int i;

	*range[0] = {0, 0, 0, 0};

	min = 0;
	max = 4;
	i = ft_ultimate_range(range, min, max);	
	printf("%d", i);
}
