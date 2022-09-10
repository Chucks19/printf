#include "main.h"

int pr_int(int n)
{
    int i = 1;
    if (n < 0)
    {
        n *= -1;
        _putchar('-');
    }
    if (n/10)
        pr_int(n / 10);
    _putchar((n % 10) + '0');
    return(i);
 }