#include <stdio.h>
#include "main.h"

/**
*_atoi - converts a string to an integer
*@s: string to be converted
*
*Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, d, n, len, f, digit;

i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;

while (i < len && f == 0)
{
if (s[i] == '_')
++d;

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);

return (n);
}




/**
 * main - Program that multiplies two numbers.
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int index, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * _atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
