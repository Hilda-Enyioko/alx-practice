#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * _putchar: prints a single character
 * Description: writes a single character to stdout
 * Return: 1
 */

int _putchar(char c)
{

  return (write(1, &c, 1));
}
