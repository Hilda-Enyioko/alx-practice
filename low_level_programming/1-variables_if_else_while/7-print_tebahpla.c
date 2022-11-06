#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 * Descriotion: only the putchar function can be used
 *              the putchar function can on be called twice
 * Return: 0
 */

int main(void)
{
  char z = 'z';

  while (z <= 'z' && z >= 'a')
    {
      putchar(z);
      z--;
    }
  putchar('\n');
  return (0);
}
