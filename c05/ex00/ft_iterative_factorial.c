/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 16:38:48 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/24 17:50:32 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int factorial;
	int count;

	factorial = 1;
	count = 1;
	if (nb > 0)
	{
		while (count <= nb)
		{
			factorial = factorial * count;
			count++;
		}
		return (factorial);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
