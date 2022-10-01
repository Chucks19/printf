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
	}
	if ((oct / 8) > 0)
		count += octa(oct / 8);
	count += _putchar((oct % 8) + '0')
	
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

int prhex(int H)
{
	int i = 1;
	if (H >= 0 || H <= 9)
		_putchar(H +'0');
	else if (H == 10)
		_putchar('a');
	else if (H == 11)
		_putchar('b');
	else if (H == 12)
		_putchar('c');
	else if (H == 13)
		_putchar('d');
	else if (H == 14)
		_putchar('e');
	else if (H == 15)
		_putchar('f');

	return (i);
}
