/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   numtowords.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 16:31:36 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/27 16:31:38 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		numbleng(char *number)
{
	int count;

	count = 0;
	while (number[count] != '\0')
		count++;
	return (count);
}

int		main()
{
	int strl;
	int *array;
	int index;
	char number[] = "42";

	index = 0;
	strl = numbleng(number);
	array = (int *)malloc(strl * sizeof(int));
	array[index] = numbconverter(number, strl, index);

}

char	numbconverter(char *number, int strl, int index)
{
	int result;
	int mover;

	mover = 1;
	result = 0;
	strl = numbleng(number);
	if (number < '0' || number > '9')
	{
			write(2, "Error\n", 6);
			return (1);
	}
	if (strl > mover)
	{
			numberconverter(number++);
	}
	else
	{
		result = number - '0';
		mover++;
		return (result);
	}
}