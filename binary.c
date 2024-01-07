#include <stdio.h>
void to_binary(unsigned long n);
int main(void)
{
    unsigned long number;
    printf("Введите целое число (q для завершения):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Двоичный эквивалент:");
        to_binary(number);
        putchar('\n');
        printf("Введите целое число (q для завершения):\n");
    }
    printf("Программа завершена.\n");
    return 0;
}
void to_binary(unsigned long n)
{
    int r;
    r = n % 2;
    if (n >= 2)
    {
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');
    return;
}