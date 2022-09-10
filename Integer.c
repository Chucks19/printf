#include "main.h"

int pr_int(int n)
{
    int i = 0;
    if (n < 0)
    {
        n *= -1;
        _putchar('-');
        i++;
    }

    if (n/10)
        i += pr_int(n / 10);
        i += _putchar((n % 10) + '0');    
    return(i);
 }