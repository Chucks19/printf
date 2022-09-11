#include "main.h"

int binary(int n)
{
       int count = 0;
       if (n < 0)
       {
         n *= -2;
       }
    if (n >> 1 > 0)
         count += binary (n >> 1);
      
   count += _putchar((n % 2) + '0');
      
   return (count++);
}

int octa(int oct)
{

      int count = 0;
      if (oct < 0)
      {
         oct *= -2;
      }
      if ((oct / 8) > 0)
         count += octa(oct / 8);

      count += _putchar((oct % 8) + '0');

      return (count++);
   }

int hexa(int hex)
{
   int count = 0;
   if (hex < 0)
   {
      hex *= -2;
   }
   if ((hex / 16) > 0)
      count += hexa((hex / 16));
   count += _putchar(prhex(hex % 16));

   return(count);
}

char prhex(int H)
{
   if (H >= 0 || H <= 9)
      _putchar(H +'0');
if (H == 10)
   _putchar('A');
if (H == 11)
   _putchar('B');
if (H == 12)
   _putchar('C');
if (H == 13)
   _putchar('D');
if (H == 14)
   _putchar('E');
if (H == 15)
   _putchar('F');

return (0);
}