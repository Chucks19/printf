#include "main.h"

int pr_int(int valve)
{
    if (valve < 0)
    {
        valve *= -1;
        putchar('-');
    }
    if (valve)
    {
        pr_int(valve / 10);
        putchar((valve % 10) + '0');
    }
    return (0);
}