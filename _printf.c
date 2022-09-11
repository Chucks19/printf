#include "main.h"

/**
* @count: value will be returning
* @op: value will be outputing to our screen, remeber setting an integer to print and _putchar gives number of character.


*/

int _printf(const char *format, ...)
{
int count = 0, j, b;
char *strin;
char *stri;
char *ptrin;
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
			case 'p':
				ptrin = va_arg(lp, char *);
				if (!ptrin)
				{
					_putchar('(');
					_putchar('n');
					_putchar('i');
					_putchar('l');
					_putchar(')');
				}
				for (j = 8; ptrin[j] != '\0'; j++)
				count += _putchar(ptrin[j]);
				break;
			case 'S':
				stri = va_arg(lp, char *);
				for (b = 0; stri[b] != '\0'; b++)
				{
					if ((stri[b] == '\\') && (stri[b+1] == 'n'))
					{ 
						count += _putchar('\\');
						count += _putchar('x');
						count += _putchar('0');
						count += _putchar('A');
						b++;
					}
					count += _putchar(stri[b]);
				}
				break;
			case 'b':
				count += binary(va_arg(lp, int));
				break;
			case 'o':
				count += octa(va_arg(lp, int));
				break;
			case 'x' :	
				count += hexa(va_arg(lp, int));
				break;
			case 'u' :
				count += pr_u(va_arg(lp, int));
				break;
			default:
				break;
		}
	i++;	
	}
}
return (count);
va_end(lp);
}