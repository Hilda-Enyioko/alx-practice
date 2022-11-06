#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 * Description: numbers must be separated by ',' followed by a space
 *              this program only uses putchar function
 *              putchar function can only be called 4 times maximum
 * Return: 0
 */

int main(void)
{
  int n = 48;

  while (n >= 48 && n <= 57)
    {
      putchar(n);
      if (n != 57)
	{
           putchar(44);
           putchar(32);
	}
      n++;
    }
  putchar('\n');
  return (0);
}
