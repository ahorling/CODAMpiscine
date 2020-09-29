/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 19:54:00 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/23 20:08:19 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int count;
	unsigned int endof;

	count = 0;
	endof = 0;
	while (dest[endof] != '\0')
	{
		endof++;
	}
	while (src[count] != '\0' && count < nb)
	{
		dest[endof] = src[count];
		endof++;
		count++;
	}
	dest[endof] = '\0';
	return (dest);
}
