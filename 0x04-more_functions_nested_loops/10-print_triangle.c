#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: The size of the triangle
 *
 * Return: void.
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
_putchar('\n');
for (i = 1; i <= size; i++)
{
for (j = 0; j < size - i; j++)
_putchar(32);
for (k = 0; k < i; k++)
_putchar(35);
_putchar('\n');
}
}
