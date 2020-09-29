#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    int filedesc;
    char *fptr;

    if (argc != 2 && argc != 3)
    {
        write(2, "Parameter Error\n", 15);
        return (1);
    }
    if (argc == 2)
    {
        fptr = *(argv + 1);
        filedesc = open (fptr, O_RDWR);
        if (filedesc < 0)
        {
            write(2, "File Error\n", 10);
            return (1);
        }
        if (write(filedesc, "testing\n", 8) != 8)
        {    
            write(2, "File Write Error\n", 17);
            return (1);
        }
        if (close(filedesc) < 0)
        {
            write(2, "File Close Error\n", 17);
            return (1);
        }
        return (0);

    }
    else if (argc == 3)
    {

        filedesc = open("/Users/ahorling/Documents/rush02/Testing/ReadWritetesting/testfile2.txt", O_RDWR | O_APPEND);
        if (filedesc < 0)
        {
            write(2, "File Error\n", 10);
            return (1);
        }
        if (write(filedesc, "testing", 7) != 7)
        {    
            write(2, "File Write Error\n", 17);
            return (1);
        }
        if (close(filedesc) < 0)
        {
            write(2, "File Close Error\n", 17);
            return (1);
        }
    }
}