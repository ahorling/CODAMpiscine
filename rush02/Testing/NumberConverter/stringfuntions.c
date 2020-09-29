/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stringfuntions.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 14:35:43 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/27 14:35:46 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char *ft_strstr(char *str, char *to_find)
{
	int index1;
	int index2;
	char a;
	char b;

	index1 = 0;
	index2 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[index1] != '\0')
		{
			index2 = 0;
			a = str[index1 + index2];
			b = to_find[index2];
			while ((a ==b) && (a !=  '\0') && (b != '\0'))
			{
				index2++;
				a = str[index1 + index2];
				b = to_find[index2];
			}
			if ((index2 != 0) && (to_find[index2] == '\0'))
				return (&str[index1]);
			index1++;
		}
	return (NULL);
}
