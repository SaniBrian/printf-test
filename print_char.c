#include "main.h"
#include <stdlib.h>
/**
*print_char - prints char specifier
*@args: current argument
*Return: print size
*/

int print_char(va_list args)
{
	char ch = va_arg(args, int);

	_putchar(ch);
	return (1);
}
