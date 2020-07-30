/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checkrules.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/19 16:36:17 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/19 17:38:46 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_sum_rows(int **array)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i != 4)
	{
		if ((array[i][j] + array [i][j + 1] + array[i][j + 2] + array[i][j + 3]) != 202)
			return (1);
	i++;
	}
	i = 0;
	while (j != 4)
	{
		if ((array[i][j] + array[i + 1][j] + array[i + 2][j] + array[i + 3][j]) != 202)
			return (1);
	j++;
	}
	return (0);
}

