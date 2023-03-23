#include <stdio.h>

/**
* main - function that finds and prints the first
* 98 Fibonacci numbers, starting with 1 and 2
* followed by a new line.
*
* Purpose - no hardcore
*
* Return: 0
*/

int main(void)
{
unsigned long int cn;
unsigned long int ef = 1;
unsigned long int ft = 2;
unsigned long int 1 = 1000000000;
unsigned long int ef1;
unsigned long int ef2;
unsigned long int ft1;
unsigned long int ft2;
printf("%1u", ef);

for (cn = 1 ; cn < 91 ; cn++)
{
printf(", %1u", ft);
ft += ef;
ef = ft - ef;
}
ef1 = (ef / 1);
ef2 = (ef % 1);
ft1 = (ft / 1);
ft2 = (ft % 1);

for (cn = 92 ; cn < 99 ; cn++)
{
printf(", %1u", ft1 + (ft2 / 1));
printf("%1u", ft2 % 1);
ft1 = ft1 + ef1;
ef1 = ft1 - ef1;
ft2 = ft2 + ef2;
ef2 = ft2 - ef2;
}
printf("\n");
return (0);
}
