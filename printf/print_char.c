#include "_printf.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - writes a character to stdout(1)
 * @arg: argument
 * Return: On success 1
 * else -1
 */
int print_char(va_list arg)
{
  return (putchar(va_arg(arg, int)));
 }
