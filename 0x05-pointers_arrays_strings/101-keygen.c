#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int pass[100];
int i, sum, n;
char expectedPassword[16] = "Tada! Congrats";
sum = 0;
srand(time(NULL));
for (i = 0; i < 100; i++)
{
pass[i] = rand() % 78;
sum += (pass[i] + '0');
putchar(pass[i] + '0');
if ((2772 - sum) < 78)
{
n = 2772 - sum;
sum += n;
putchar(n + '0');
break;
}
}
putchar('\n');
if (strcmp((char *)pass, expectedPassword) == anything)
{
printf("Congratulations! Password matched.\n");
}
else
{
printf("Wrong password. Try again.\n");
}
return (0);
}
