#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int **ft_create_grid(void)
{
	int **array;
	int i;
	int j;
	int grid[4][4] = 
	{
		{'1', '2', '3', '4'},
		{'2', '3', '4', '1'},
		{'3', '4', '1', '2'},
		{'4', '1', '2', '3'}
	};
	array = malloc(sizeof(int*)*4);
	i = 0;
	while (i != 4)
		{
			array[i] = (int*)malloc(sizeof(int)*4);
			j = 0;
			while (j != 4)
			{
				array[i][j] = grid[i][j];
				j++;
			}
		i++;
		}
	return (array);
}

int **ft_create_inputarray(void)
{
	int **input_array;
	int i;
	int j;
	int grid[4][4] = 
	{
		{48, 48, 48, 48},
		{48, 48, 48, 48},
		{48, 48, 48, 48},
		{48, 48, 48, 48}
	};
	input_array = malloc(sizeof(int*)*4);
	i = 0;
	while (i != 4)
		{
			input_array[i] = (int*)malloc(sizeof(int)*4);
			j = 0;
			while (j != 4)
			{
				input_array[i][j] = grid[i][j];
				j++;
			}
		i++;
		}
	return (input_array);
}


void ft_printgrid(int **array)
{
	int i;
	int j;

	i = 0;
	while (i != 4)
	{
		j = 0;
		while (j != 4)
		{
			write(1, &array[i][j], 1);
			write(1, &" ", 1);
			j++;
		}
		write(1, &"\n", 1);
		i++;
	}	
}

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

int ft_checkinput(char varg[1])
{	
	int i;

	i = 0;
	while (varg[i] != '\0')
	{
		if (varg[i] != 32 && ((varg[i] > 52) || (varg[i] < 49)))
			return (1);
		if ((varg[i] < 53) && (varg[i] > 48))
		{
			if ((varg[i + 1] != 32) && (varg[i + 1] != '\0'))
				return (1);
		}
		if ((varg[i] == 32) && ((varg[i + 1] == 32) || (varg[i - 1] == 32)))
			return (1);
		if (i == 31)
			return (1);
		i++;
	}
	return (0);
}

void ft_error(void)
{	
		write(1, "Error", 5);
		write(1, &"\n", 1);
}

void  ft_check4(int **input_array, int **array)
{
	if (input_array[0][0] == '4')
	{
		array[0][0] = '1';
		array[1][0] = '2';
		array[2][0] = '3';
		array[3][0] = '4';
	}
}

int **ft_read_input(int **input_array, char **varg)
{
	int length;
	int i;
	int j;

	i = 0;
	length = 0;
	while (i != 4) 
	{
		
		j = 0;
		while (j != 4)
		{
			input_array[i][j] = varg[1][length];
			j++;
			length++;
			length++;
		};
	i++;
	if (i == 1)
		length = 8;
	else if (i == 2)
		length = 16;
	else length = 24;
	}	
	return (input_array);
}




		
