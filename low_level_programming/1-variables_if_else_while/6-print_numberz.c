#include <stdio.h>

/**
 * main - printsall single digit numbers, followed by a new line
 * 
 * Return: 0
 */

int main(void)
{
  int n = 48;

  while ( n <= 57 && n >= 48)
    {
      putchar(n);
      n++;
    }
  putchar('\n');
}
