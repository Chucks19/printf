#include "main.h"

int main()
{
       int A, B;
       A = _printf("\n%d ok %o qww %x sjs 6\n", 2110, 13, 351);
       _printf("\n%d\n", A);
       B = printf("\n%d ok %o qww %x sjs 6\n", 2110, 13, 351);
       printf("\n%d\n", B);

       /**B = printf("\n%d ok qww sjs %b 6\n", 2110, 8);
       printf("\n%d\n", B);
*/
       return (0);
}