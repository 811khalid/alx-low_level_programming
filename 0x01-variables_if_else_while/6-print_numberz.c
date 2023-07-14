#include <stdio.h>
/**
 * main - print numbers of base 10 start from 0, follow by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
