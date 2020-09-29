/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb3.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 14:32:23 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/21 10:00:57 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char a)
{
	write(1, &a, 1);
}

void	print(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

int		putdigit(int a)
{
	int b;
	int c;

	b = (a / 10) + '0';
	c = (a % 10) + '0';
	print(b, c);
	return (0);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		while (b <= 99)
		{
			putdigit(a);
			printchar(' ');
			putdigit(b);
			if (a != 98)
				print(',', ' ');
			b++;
		}
		a++;
		b = a + 1;
	}
}
