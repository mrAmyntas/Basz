/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 12:48:10 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/23 14:27:48 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *array;
	int i;

	if (min >= max)
		return (0);
	i = min;
	while (i != max)
		i++;
	array = (int*)malloc(sizeof(int) * i + 1);
	i = 1;
	array[0] = min;
	while (min != max - 1)
	{
		array[i] = (min + 1);
		i++;
		min++;
	}
	array[i] = '\0';
	return (array);
}



int main(void)
{
	int min;
	int max;
	int *range;
//	int i;

	min = 15;
	max = 15;
	range = ft_range(min, max);
//	i = 0;	
//	while (range[i] != '\0')
//		i++;
	printf("%s\n", range);
//	printf("%d", range);

//	i = 0;
//	while (min != max)
//	{
//		printf("%d %s", range[i], ",");
//		min++;
//		i++;
//	}
}
