/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 09:33:43 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/27 10:51:12 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	**ft_create_inputarray(int a, char **argv);
void 	ft_search(int a, char *str);
void	ft_translate(char **str, char *str2);
void	ft_decide(int x, char *buf, char **inputarray);

int		main(int argc, char **argv)
{
	int fd;
	int ret;
	char *buf;
	int x;
	char **inputarray;

	if (argc > 3)
	{
		write(1, "Error: Too many arguments", 25);
		return (0);
	}
	if (argc == 2)
	{	
		buf = (char*)malloc(1000);	
		fd = open("numbers.dict", O_RDWR | O_APPEND);
		if (fd == -1)
			ft_putstr("Error: open() failed\n");
		ret = read(fd, buf, 1000);
		x = ft_strlen(argv[1]);
		inputarray = ft_create_inputarray(x, argv);

		ft_decide(x, buf, inputarray); 


		
	}	
	if (close(fd) == -1)
		ft_putstr("Error: close() failed\n");
	free(buf);
	return (0);
}
