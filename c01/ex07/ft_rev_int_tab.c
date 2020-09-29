/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 15:15:38 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/21 15:41:23 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int position;
	int holder;

	position = 0;
	while (position < size)
	{
		holder = tab[position];
		tab[position] = tab[size];
		tab[size] = holder;
		position++;
		size--;
	}
}
