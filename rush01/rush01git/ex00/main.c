/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 17:20:56 by ahorling      #+#    #+#                 */
/*   Updated: 2020/09/20 17:21:00 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    failure(void)
{
    write(1, "Error\n", 6);
}

int        main(int argc, char *argv[])
{
    int numcount;
    int charnums[16];
    int convert;
    int a;

    numcount = 0;
    while (*argv[1] > '\0')
    {
        if (*argv[1] < '5' && *argv[1] > '0')
        {
            charnums[numcount] = *argv[1];
            numcount++;
            *argv[1]++;
            a = *argv[1];
        }
        else if (*argv[1] == ' ')
        {
            *argv[1]++;
            a = *argv[1];
        }
        else
        {
            failure();
            *argv[1] = '\0';
            numcount = 16;
        }
    }
    if (numcount != 16)
        failure();
    if (argc != 2)
        failure();
    return (0);
}
