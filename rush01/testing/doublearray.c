/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   doublearray.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 15:10:27 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/19 15:53:11 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main()
{
	int *p;
	int a;
	int b;

	a = 1;
	b = 0;
	p = (int*)malloc(4*sizeof(int));
	if (p == NULL)
	{
		printf("memory not allocated\n");
	}
	else
	{
		printf("succes!\n");
		while (b <= 4)
		{
			p[b] = b + 1;
			b++;
		}
		b = 0;
		printf("elements of array are:");
		while (b <= 4)
		{
			printf(" %d,", p[b]);
			b++;
		}
	}
}
