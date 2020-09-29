/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 11:39:46 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/10 12:34:43 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int digit;

	digit = '0';
	while (digit <= 57)
	{
		ft_putchar(digit);
		digit = digit + 1;
	}
}
