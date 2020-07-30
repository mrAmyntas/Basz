/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_decide.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 21:48:05 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/26 22:35:32 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
void	ft_translate(char **inputarray, char *buf);
void	ft_translate_thousand(char **inputarray, char *buf);
void	ft_translate_m(char **inputarray, char *buf);
void	ft_translate_b(char **inputarray, char *buf);
void	ft_translate_t(char **inputarray, char *buf);
void	ft_translate_quad(char **inputarray, char *buf);
void	ft_translate_sept(char **inputarray, char *buf);
void	ft_translate_sex(char **inputarray, char *buf);
void	ft_translate_qint(char **inputarray, char *buf);


void	ft_decide(int x, char *buf, char **inputarray)
{
	if (x < 4)
		ft_translate(inputarray, buf);
	if (x > 3 && x < 7)
	{
		ft_translate_thousand(inputarray, buf);
		ft_translate(inputarray, buf);
	}
	if (x > 6 && x < 10)
	{
		ft_translate_m(inputarray, buf);
		ft_translate_thousand(inputarray, buf);
		ft_translate(inputarray, buf);
	}
	if (x > 9 && x < 13)
	{
		ft_translate_b(inputarray, buf);
		ft_translate_m(inputarray, buf);
		ft_translate_thousand(inputarray, buf);
		ft_translate(inputarray, buf);
	}
	if (x > 12 && x < 16)
	{
		ft_translate_t(inputarray, buf);
		ft_translate_b(inputarray, buf);
		ft_translate_m(inputarray, buf);
		ft_translate_thousand(inputarray, buf);
		ft_translate(inputarray, buf);
	}
	if (x > 15 && x < 19)
	{
		ft_translate_quad(inputarray, buf);
		ft_translate_t(inputarray, buf);
		ft_translate_b(inputarray, buf);
		ft_translate_m(inputarray, buf);
		ft_translate_thousand(inputarray, buf);
		ft_translate(inputarray, buf);
	}
	if (x > 15 && x < 19)
	{	
		ft_translate_qint(inputarray, buf);
		ft_translate_quad(inputarray, buf);
		ft_translate_t(inputarray, buf);
		ft_translate_b(inputarray, buf);
		ft_translate_m(inputarray, buf);
		ft_translate_thousand(inputarray, buf);
		ft_translate(inputarray, buf);
	}
	if (x > 18 &&  x < 22)
	{
		ft_translate_sex(inputarray, buf);
		ft_translate_qint(inputarray, buf);
		ft_translate_quad(inputarray, buf);
		ft_translate_t(inputarray, buf);
		ft_translate_b(inputarray, buf);
		ft_translate_m(inputarray, buf);
		ft_translate_thousand(inputarray, buf);
		ft_translate(inputarray, buf);
	}
	if (x > 21 && x < 25)
	{
		ft_translate_sept(inputarray, buf);
		ft_translate_sex(inputarray, buf);
		ft_translate_qint(inputarray, buf);
		ft_translate_quad(inputarray, buf);
		ft_translate_t(inputarray, buf);
		ft_translate_b(inputarray, buf);
		ft_translate_m(inputarray, buf);
		ft_translate_thousand(inputarray, buf);
		ft_translate(inputarray, buf);
	}

}
