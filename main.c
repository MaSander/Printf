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

    printf("|- %d", printf(" %x ", 0));
    jump();
    printf("|- %d", ft_printf(" %x ", 0));

    jump();
    jump();

    return (1);
}
