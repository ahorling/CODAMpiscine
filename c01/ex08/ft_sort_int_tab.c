/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 15:43:53 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/21 16:09:34 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int position;
	int holder;

	position = 0;
	while (position < size)
	{
		if (tab[position + 1] < tab[position])
		{
			holder = tab[position + 1];
			tab[position + 1] = tab[position];
			tab[position] = holder;
			position++;
		}
		else
		{
			position++;
		}
	}
}
