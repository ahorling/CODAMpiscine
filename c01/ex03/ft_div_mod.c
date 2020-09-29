/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 12:49:26 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/18 14:33:25 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int c;
	int d;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}
