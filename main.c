#include "printf.h"
#include "converters/converters.h"
#include "stdio.h"

void jump()
{
    printf("\n");
}

int main(void)
{
    int positive = -42;

    jump();

    ft_printf("|%x|", &positive);
    ft_printf("|%X|", &positive);
    ft_printf("|%p|", &positive);
    ft_printf("|%d|", &positive);
    ft_printf("|%d|", positive);
    ft_printf("|%u|", positive);

    jump();
    jump();

    return (1);
}
