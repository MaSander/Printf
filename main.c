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

    printf("|- %d", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
    jump();
    printf("|- %d", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
    jump();
    printf("|- %d", printf("%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
    jump();
    printf("|- %d", ft_printf("%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
    jump();
    printf("|- %d", printf("%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", -42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
    jump();
    printf("|- %d", ft_printf("%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", -42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));

	// TEST(6, print(" %p %p ", LONG_MIN, LONG_MAX));
	// TEST(8, print(" %p %p ", ULONG_MAX, -ULONG_MAX));
	// TEST(9, print(" %p %p ", 0, 0));

    jump();
    jump();

    return (1);
}
