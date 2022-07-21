#include "ft_printf.h"
#include "converters/converters.h"
#include <stdio.h>
#include <limits.h>

void jump()
{
    printf("\n");
}

int main(void)
{
    int number = -42;

    jump();

    printf("|- %d", printf(" %p %p ", LONG_MIN, LONG_MAX));
    jump();
    printf("|- %d", ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
    jump();
    jump();
    printf("|- %d", printf(" %p %p ", ULONG_MAX, -ULONG_MAX));
    jump();
    printf("|- %d", ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX));

	// TEST(6, print(" %p %p ", LONG_MIN, LONG_MAX));

	// TEST(8, print(" %p %p ", ULONG_MAX, -ULONG_MAX));


    jump();
    jump();

    return (1);
}
