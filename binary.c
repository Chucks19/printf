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
         oct *= -1;
         if ((oct / 8) > 0)
            count += octa(oct / 8);
         count += _putchar((oct % 8) + '0');
      }
      else if ((oct / 8) > 0)
         count += octa(oct / 8);

      count += _putchar((oct % 8) + '0');

      return (count++);
   }

int hexa(int hex)
{
   int count = 0;
   if (hex < 0)
   {
      hex *= -1;
   }
   if ((hex / 16) > 0)
      count += hexa((hex / 16));
   count += _putchar(prhex(hex % 16));

   return(count);
}

char prhex(int H)
{
   char *g = "abcdef";
   if (H >= 0 || H <= 9)
      _putchar(H +'0');
if (H == 10)
   _putchar('a');
if (H == 11)
   _putchar('b');
if (H == 12)
   _putchar('c');
if (H == 13)
   _putchar('d');
if (H == 14)
   _putchar('e');
if (H == 15)
   _putchar('f');

return (0);
}