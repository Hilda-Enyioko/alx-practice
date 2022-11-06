#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lower case, followed by a new line
 * Description: this program only uses putchar function
 *              putchar function can only be called three times
 * Return: 0
 */

int main(void)
{
  char hex = 48;

  while (hex >= 48 && hex <= 57)
    {
      putchar(hex);
      hex++;
    }


  hex = 'a';
  while (hex >= 97 && hex <= 102)
    {
      putchar(hex);
      hex++;
    }

  putchar('\n');
  return (0);
}
