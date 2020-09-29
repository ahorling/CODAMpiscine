/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:58:12 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/23 17:19:49 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int count;
	int endof;

	count = 0;
	endof = 0;
	while (dest[endof] != '\0')
	{
		endof++;
	}
	while (src[count] != '\0')
	{
		dest[endof] = src[count];
		endof++;
		count++;
	}
	dest[endof] = '\0';
	return (dest);
}
