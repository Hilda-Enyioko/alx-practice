#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercse, followed by a new line
 * 
 * Return: nothing
 */

void print_alphabet(void)
{
  char a = 'a';

  while (a >= 97 && a<= 122)
    {
      _putchar(a);
      a++;
    }
  _putchar('\n');
}
