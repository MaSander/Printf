#include "ft_printf.h"
#include "converters/converters.h"
#include "stdio.h"

void jump()
{
    printf("\n");
}

int main(void)
{
    int number = -42;

    jump();

    printf("%d - ", ft_printf("|%x|", &number));
    jump();
    printf("%d - ", ft_printf("|%X|", &number));
    jump();
    printf("%d - ", ft_printf("|%p|", &number));
    jump();
    printf("%d - ", ft_printf("|%d|", &number));
    jump();
    printf("%d - ", ft_printf("|%d|", number));
    jump();
    printf("%d - ", ft_printf("|%u|", number));
    jump();
    printf("%d - ", printf("|%u|", number));

    jump();
    jump();

    return (1);
}
