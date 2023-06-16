#include <stdio.h>
/**
* main - Entry point of the program.
*
* Return: Always 0 (success)
*/
int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
if (lowerCase == 'e' || lowerCase == 'q')
{
lowerCase += 1;
}
else
{
putchar(upperCase);
lowerCase += 1;
}
}
putchar('\n');
return (0);
}
