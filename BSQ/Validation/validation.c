/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validation.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 11:46:59 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/28 11:47:04 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	maperror(void)
{
	write(2, "Map Error\n", 10);
}

int		startvalidation(int argc, char *fpath)
{
	int fdescriptor;
	int i;

	i = 0;
	fdescriptor = open(fpath, O_RDONLY);
	if (argc == 1)
	{
		write(2, "Must Provide Map\n", 17);
		return (0);
	}
	if (fdescriptor < 0)
	{
		maperror();
		return (1);
	}
	if (close(fdescriptor) < 0)
	{
		maperror();
		return (1);
	}
	else
		return (0);
}

int		validation(int argc, char *argv[])
{
	int counter;
	char *fpath;

	counter = 0;
	while (counter != argc)
	{
		fpath = argv[counter];
		if (startvalidation(argc, fpath) != 0)
			return (1);
	counter++;
	}
	return (0);
}