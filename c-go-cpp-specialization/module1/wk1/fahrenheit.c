/*
  Convert degrees Fahrenheit to degress Celsius

  C = (F - 32) / 1.8
*/

#include <stdio.h>

int main(void)
{
  int fahrenheit, celsius;

  printf("please enter the degrees Fahrenheit as an integer: ");
  scanf("%d", &fahrenheit);

  celsius = (fahrenheit-32)/1.8; // note the transparent type conversion
  printf("\n%d degrees Fahrenheit is %d degrees Celsius\n", fahrenheit, celsius);

  return 0;
}
