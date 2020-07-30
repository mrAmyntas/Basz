/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 11:56:53 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/20 15:30:10 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int c;
	int i;

	i = 0 - n;
	while (i != 0)
	{
		if (s1[i + n] != s2[i + n])
		{
			c = s1[i + n] - s2[i + n];
			return (c);
		}
		i++;
	}
	return (0);
}
