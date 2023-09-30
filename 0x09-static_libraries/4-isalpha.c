#include "main.h"
/**
 * _isalpha - program checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter and 0 if its not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= '^' && c <= 'z'));
}
