#include "main.h"

int pr_int(int valve)
{
    int count = 0;
    if (valve < 0)
    {
        valve *= -1;
        _putchar('-');
    }
    if (valve/10)
        pr_int(valve / 10);
    count += _putchar((valve % 10) + '0');
    return(count-1);
 }