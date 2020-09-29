/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:08:45 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/28 17:08:48 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		validation(int argc, char *argv[]);
int		startvalidation(int argc, char *fpath);
void	maperror(void);

int		main(int argc, char *argv[])
{
	validation(argc, argv);
	return (0);
}