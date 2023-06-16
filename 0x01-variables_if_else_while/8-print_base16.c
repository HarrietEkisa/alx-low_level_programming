#include <stdio.h>

/**
 * main - Prints the lowercase hexadecimal numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
