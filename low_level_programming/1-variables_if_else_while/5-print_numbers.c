#include <stdio.h>

/**
 * main - prints all single digit numbers from zero
 *
 * Return: 0
 */

int main(void)
{
  char a = '0';

  while ( a >= '0' && a <= '9')
    {
      putchar(a);
      a++;
    }
  putchar('\n');
  return (0);
}
