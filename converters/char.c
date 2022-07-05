#include <unistd.h>

int     char_writer(int c)
{
    write(1, &c, 1);
    return (1);
}
