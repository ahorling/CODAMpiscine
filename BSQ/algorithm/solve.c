/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solve.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 13:25:32 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/29 13:25:35 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int 	looper(char **grid, char fill, char obs, char empty, int x, int y);

int		main()
{
	char *grid[3][4] = {
		{".", ".", ".", "\n"},
		{"o", ".", ".", "\n"},
		{"o", ".", "o", "\n"}
	};
	char fill;
	char obs;
	char empty;
	int x;
	int y;
	fill = 'X';
	obs = 'o';
	empty = '.';
	x = 4;
	y = 3;
	int a;

	a = looper(*grid, 'X', 'o', '.', 4, 3);
	if (a == 1)
		printf("obstruction found\n");
	else
		printf("no obstructions!\n");
	return (0);
}

int 	looper(char **grid, char fill, char obs, char empty, int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			if (grid[i][j] != obs)
				j++;
				printf("%c ", grid)
			else
				return (1);
		}
		i++;
		j = 0;
	}
	return (0);
}