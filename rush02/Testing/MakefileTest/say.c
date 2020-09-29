#include <unistd.h>

void    say(char *str)
{
    while (*str)
        write(1, str++, 1);
}