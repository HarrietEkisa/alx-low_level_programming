#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This program modifies the value of a[2] indirectly using a pointer.
 * It assigns the value 98 to a[2] and then prints it.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
/*
* The line of code below uses pointer arithmetic to indirectly modify a[2].
* We subtract 2 from the index of a[2] to get the correct offset from p.
* Since p points to n, *(p - 2) will access the memory location of a[2].
* Then we assign the value 98 to that memory location.
*/
*(p - 2) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}

