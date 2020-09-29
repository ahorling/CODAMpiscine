/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   filefunctions.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 11:05:54 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/27 11:06:29 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_fsizecalc(int fdescriptor)
{
	int index;
	char *c;
	int fsize;

	index = 0;
	c = (char *)malloc(1 * sizeof(char));
	fsize = read(fdescriptor, *c, 1);
	while (fsize > 0)
	{
		index++;
		fsize = read(fdescriptor, *c, 1);
	}
	free(c);
	if (fsize < 0)
	{
		write(2, "Dict Error\n", 18);
		index = -1;
	}
	return (index);
}

int		ft_fsize(char *fpath)
{
	int	fdescriptor;
	int size;

	fdescriptor = open(fpath, O_RDONLY);
	if (fdescriptor < 0)
	{
		write(2,"Dict Error\n", 11);
		return (-1);
	}
	size = 0;
	size = ft_fsizecalc(fdescriptor);
	if (close(fdescriptor) < 0)
	{
		write(2, "Dict Error\n", 11);
		size = -1;
	}
}

int		ft_fread(char *fpath, char *fstr, int fsize)
{
	int fdescriptor;
	int fread;

	fdescriptor = open(fpath, O_RDONLY);
	if (fdescriptor < 0)
	{
		write(2, "Dict Error\n", 11);
		return (-1);
	}
	fread = read(fdescriptor, (void *)fstr, fsize);
	if (fread < fsize)
	{
		write(2, "Dict Error\n", 11);
		fstr[0] = '\0';
		fread = -1;
	}
	if (close(fdescriptor) < 0)
	{
		write(2, "Dict Error\n", 11);
		fread = -1;
	}
	return (fread);
}

char	*ft_fproc(char *fpath)
{
	int		fsize;
	int		fread;
	char	*fcontent;

	fcontent = NULL;
	fsize = ft_fsize(fpath);
	if (fsize < 0)
		return (NULL);
	fcontent = (char *)malloc((fsize + 1) * sizeof(char));
	fcontent[0] = '\0';
	fread = ft_fread(fpath, fcontent, fsize);
	if (fread < fsize)
	{
		free(fcontent);
		write(2, "Dict Error\n", 11);
		return (NULL);
	}
	return (fcontent);
}