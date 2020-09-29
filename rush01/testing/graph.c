/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   graph.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 11:37:31 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/19 15:10:14 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a)
{
	write(1, &a, 1);
}

void	printarray(int a)
{
	char input[4] = {'1', '2', '3', '4'};
	int *p;

	p = input;
	if(a == 1)
	{
		print(input[0]);
		print(' ');
		p++;
	}
	if(a == 2)
	{
		print(input[1]);
		print(' ');
		p++;
	}
	if (a == 3)
	{
		print(input[2]);
		print(' ');
		p++;
	}
	if (a == 4)
	{
		print(input[3]);
		p++;
	}
}

int		main(int argc, char **argv)
{
	int a;
	int b;
	int *given; //pointer to given string
	
	given = argv[0];
	a = 1; //graph dimensions
	b = 1;
	while (a <= 4)
	{
		while (b <= 4)
		{
			printarray(*given);
			b++;
		}
		a++;
		b = 0;
		print('\n');
	}
}
