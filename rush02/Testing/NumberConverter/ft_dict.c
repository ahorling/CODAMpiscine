/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dict.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 15:07:49 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/27 15:07:52 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int		ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find);

int		ft_print(char *num, char *dictionary)
{
	char *str;
	int index;

	str = NULL;
	str = ft_strstr(dictionary, num);
	index = ft_strlen(num) + 1;
	if (str != NULL)
	{
		while ((str[index] != '\n') && (str[index] != '\0'));
		{
			write(1, &str[index], 1);
			index++;
		}
	}
	else
		write(1, "Dict Error\n", 11);
	return (0);
}
