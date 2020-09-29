#include "printing.h"

int     main(int argc, char **argv)
{
    if (argc != 2)
        forbidden();
    else if (argv[1][1] != '\0')
        forbidden();
    else if (argv[1][0] > '0')
        say("Positive!\n");
    else if (argv[1][0] == '0')
        say("Thats a zero!\n");
    else if (argv[1][0] < '0')
        say("Negative!\n");
    else
        forbidden();
    return (0);
}