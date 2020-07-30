/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/19 14:21:12 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/19 17:39:48 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_checkinput(char *str);
void ft_error(void);
void ft_check4(int **input_array, int **array);
int **ft_create_inputarray(void);
int **ft_create_grid(void);
void ft_printgrid(int **array);
int **ft_read_input(int **input_array, char **varg);
int ft_sum_rows(int **array);

int main(int narg, char **varg)
{
	int y;
	int **array;
	int **input_array;
	
	y = ft_checkinput(varg[1]);
	if  ((y == 0) && (narg == 2))	
	{


		input_array = ft_create_inputarray(); 

		input_array = ft_read_input(input_array, varg);

		array = ft_create_grid();

		ft_check4(input_array, array);
		
		y = ft_sum_rows(array);
		if (y == 1)
			ft_error();
		else ft_printgrid(array);
		

	}
	else ft_error();
	return (0);	
}
