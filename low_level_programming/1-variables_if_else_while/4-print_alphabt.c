#include <stdio.h>

/**
 * main - prints alphabets in lowercase, excluding 'q' and 'e', followed by a new line
 * Description: this program only uses putchar function
 *              putchar function can only be called twice
 * Return: 0
 */

int main()
{
  char a = 'a';

  while (a <= 'z' && a >= 'a')
    {
      if (a != 'q' && a != 'e')
	{
	  putchar(a);
	}
      a++;
    }
  putchar('\n');
  return (0);
}
