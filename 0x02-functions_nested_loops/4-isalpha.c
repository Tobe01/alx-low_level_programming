#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check
 *
 * Return: 0n success 1.
 * Otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 12) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
