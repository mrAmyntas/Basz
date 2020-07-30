/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mgroen <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 16:04:25 by mgroen        #+#    #+#                 */
/*   Updated: 2020/07/29 22:08:17 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

struct				s_info
{
	int				rows;
	int				columns;
	char			empty;
	char			block;
	char			full;
};
struct				s_pnt
{
	int				size;
	char			loc;
};
struct s_info		g_info;
struct s_pnt		**g_point;
void				ft_putstr(char *str);
void				ft_readmap(char *fname);
void				ft_square(char *arr, int q);
int					ft_strlen(char *str, char a);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
void				ft_find_size(int x, int y);
int					ft_checker(int x, int y, int sx, int sy);
void				ft_compare(int j, int i);
void				ft_disp_square();
void				ft_translate(int y, int x);
int					ft_rows(char *buf);
int					ft_map_check(int q, char *buf);
int					ft_error(void);
int					ft_check_info(int q, char *buf);
int					ft_find_ret(char *fname);
void				ft_assign_globals(char *buf, int q);
void				ft_check_buf(char *buf, int ret);
void				ft_read_stdin();
void				ft_free(struct s_pnt **map);

#endif
