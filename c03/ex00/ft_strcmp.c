/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 15:56:55 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/23 16:29:02 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while ((s1[count] == s2[count]) && s1[count] != '\0')
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
