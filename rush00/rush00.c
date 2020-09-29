/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/13 15:14:14 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/13 18:21:12 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	hori(int x, int y)
{
	int a;

	a = 1;
	while(a <= x && y > 0)
	{
		if (a == 1 || a == x)
		{
			ft_putchar('o');
			a++;
		}
		else
		{
			ft_putchar('-');
			a++;
		}
	}
}

void	vert(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 2;
	while(b < y)
	{
		while(a == 1 || a == x)
		{
			ft_putchar('|');
			a++;
			while(a > 1 && a < x)
			{
				ft_putchar(' ');
				a++;
			}
		}
		ft_putchar('\n');
		b++;
		a = 1;
	}
}

void    rush(x, y)
{
    hori(x, y);
    ft_putchar('\n');
    vert(x, y);
    hori(x, y);
    ft_putchar('\n');
}
