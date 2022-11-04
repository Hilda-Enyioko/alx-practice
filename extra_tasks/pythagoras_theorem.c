#include <stdio.h>

/**
 * main - calculates the hypotenuse of a right angled triangle
 * Description: This program uses Pythagoras Theorem to calcualate the hypotenuse of a right-angled triangle.
 * The user enters the avalues of the adjacent and opposite sides of the triangle
 * Return: 0 or -1(if a negative value is entered
 */

int main()
{
  float adjacent, opposite, hypotenuseSquare, hypotenuse, temp;
  temp = 0;
  
  printf("Enter value of adjacent: ");
  scanf("%f", &adjacent);
  printf("Enter value of opposite: ");
  scanf("%f", &opposite);

  if (adjacent  <= 0 || opposite <= 0)
    printf("Please enter a positive value");
    return (-1);

  adjacent = adjacent * adjacent;
  opposite = opposite * opposite;

  hypotenuseSquare = adjacent + opposite;
  hypotenuse = hypotenuseSquare / 2;

  while (hypotenuse != temp)
    {
      temp = hypotenuse;
      hypotenuse = (hypotenuseSquare/temp + temp) / 2;
    }
  printf("Hypotenuse of the right-angled triangle = %f\n", hypotenuse);

  return (0);
}
