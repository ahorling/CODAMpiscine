/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 17:08:56 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/18 15:50:04 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
