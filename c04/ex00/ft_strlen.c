/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 13:21:23 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/24 13:24:49 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count)
}
