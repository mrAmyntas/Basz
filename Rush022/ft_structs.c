/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_structs.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bhoitzin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 09:47:38 by bhoitzin      #+#    #+#                 */
/*   Updated: 2020/07/26 10:21:44 by bhoitzin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_structs(void)
{
	typedef **struct
	{
		char *nbr;
		char *txt;
	} dict;
	
	dict dict0;
	
	
	dict0 = {"0", "zero"}; 

/*	dict dict1 = {"1", "one"};
	dict dict2 = {"2", "two"};
	dict dict3 = {"3", "three"};
	dict dict4 = {"4", "four"};
	dict dict5 = {'5', five};
	dict dict6 = {'6', six};
	dict dict7 = {'7', zeven};
	dict dict8 = {'8', zero};
	dict dict9 = {'9', zero};
	dict dict10 = {'10', zero};
	dict dict11 = {'11', zero};
	dict dict12 = {'12', zero};
	dict dict13 = {'13', zero};
	dict dict14 = {'14', zero};
	dict dict15 = {'15', zero};
	dict dict16 = {'16', zero};
	dict dict17 = {'17', zero};
	dict dict18 = {'18', zero};
	dict dict19 = {'19', zero};
	dict dict20 = {'20', zero};
	dict dict21 = {'30', zero};
	dict dict22 = {'40', zero};	
	dict dict23 = {'50', one};
	dict dict24 = {'60', two};
	dict dict25 = {'70', three};
	dict dict26 = {'80', four};
	dict dict27 = {'90', five};
	dict dict28 = {'100', six};
	dict dict29 = {'1000', zeven};
	dict dict30 = {'1000000', zero};
	dict dict31 = {'1000000000', zero};
	dict dict32 = {'1000000000000', zero};
	dict dict33 = {'1000000000000000', zero};
	dict dict34 = {'1000000000000000000', zero};
	dict dict35 = {'1000000000000000000000', zero};
	dict dict36 = {'1000000000000000000000000', zero};
	dict dict37 = {'1000000000000000000000000000', zero};
	dict dict38 = {'1000000000000000000000000000000', zero};
	dict dict39 = {'1000000000000000000000000000000000', zero};
	dict dict40 = {'1000000000000000000000000000000000000', zero};
	dict dict41 = {'1000000000000000000000000000000000000000', zero};
*/
    int index;

    index = 0;

    while (dict0[1][index] != '\0')
    {
        write(1, &dict0[1][index], 1);
        index++;
    }
}


