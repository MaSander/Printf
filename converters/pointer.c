#include "converters.h"

int pointer_writer(int p)
{
    char    *pointer;
    int     i;

    i = 0;
    pointer = ft_itoa(p);
    if(pointer)
    {
        i = string_writer(pointer);
        free(pointer);
    }
    return (i);
}