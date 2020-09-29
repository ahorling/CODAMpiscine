/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:32:38 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/25 17:59:33 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	count = 0;
	while ((s1[count] == s2[count]) && count < (n - 1))
	{
		if (s1[count] == '\0')
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	return (s1[count] - s2[count]);
}