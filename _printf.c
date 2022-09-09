#include "main.h"

/**
* @count: value will be returning
* @op: value will be outputing to our screen, remeber setting an integer to print and _putchar gives number of character.


*/

int _printf(const char *format, ...)
{
int count, run = 0, j;
char *strin;
unsigned int i;

va_list lp;
va_start (lp, format);

for (i = 0; format[i] != '\0'; i++){
	if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
	 else if (format[i] == '%' && format[i+1] != ' ')
	{
		switch(format[i+1])
		{
			case 'c':
				count += _putchar(va_arg(lp, int));
				break;
			case 'd':
				count += pr_int(va_arg(lp, int));
				break;
			case 'i':
				count += pr_int(va_arg(lp, int));
				break;
			case '%':
				count += _putchar('%');
				break;
			case 's':
				strin = va_arg(lp, char *);
				for (j = 0; strin[j] != '\0'; j++ )
				count += _putchar(strin[j]); 
				break;
			default:
			break;
		}
	i++;
	run += 2;	
	}
}
return (run);
va_end(lp);
}
