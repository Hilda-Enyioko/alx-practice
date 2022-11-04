#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Description: this program only uses putchar function
 *              putchar function can only be called twice
 * Return: 0
 */

int main()
{
  char a = 'a';

  while (a >= 97 && a <= 122)
    {
      putchar(a);
      a++;
    }
        putchar('\n');
  
  return (0);
}
