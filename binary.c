#include "main.h"

int binary(int n)
{
       int count = 0;
       if (n < 0)
       {
         n *= -1;
         while (n >> 1 > 0)
            count += binary(n >> 1);
         count += _putchar((n % 2) + '0');
       }
    if (n >> 1 > 0)
         count += binary (n >> 1);
      
   count += _putchar((n % 2) + '0');
      
   return (count++);
}