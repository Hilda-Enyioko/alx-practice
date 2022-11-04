#include <stdio.h>

/**
 * main - prints alphabet in lowercase, then uppercase, folowed by a new line
 * Description: this program onluy uses the putchar function
 *              the putchar function can only be called 3 times in the code
 * Return: 0
 */

int main()
{
  char a = 'a';
  char A = 'A';

  while (a >= 97 && a <= 122)
    {
      putchar(a);
      a++;
    }

  while (A >= 65 && A <= 90)
    {
      putchar(A);
      A++;
    }
  putchar('\n');
  
  return (0);
}
