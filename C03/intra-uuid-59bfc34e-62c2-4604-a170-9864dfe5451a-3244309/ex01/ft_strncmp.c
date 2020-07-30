/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 11:56:53 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/23 15:42:38 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int c;
	unsigned	int i;

	i = 0;
	while (n != 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] != s2[i])
		{
			c = s1[i] - s2[i];
			return (c);
		}
		i++;
		n--;
	}
	return (0);
}
