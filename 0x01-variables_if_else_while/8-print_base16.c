#include <stdio.h>

/**
 * main - Prints the lowercase hexadecimal numbers and decimal digits.
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;
for (letter = '0'; letter <= '9'; letter++)
{
putchar(letter);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
