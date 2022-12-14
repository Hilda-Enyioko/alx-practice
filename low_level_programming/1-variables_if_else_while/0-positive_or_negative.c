#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random value to n and prints whether n is positive or negative.
 * Description: the variable n will store a different value everytime you run this code
 * Return: 0
 */

int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if (n < 0)
    printf("%d is negative\n", n);
  if (n == 0)
    printf("%d is zero\n", n);
  if (n > 0)
    printf("%d is positive\n", n);
  return (0);
}
