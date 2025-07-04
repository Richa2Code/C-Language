#include <stdio.h>
int main()
{
  printf("%d \n", 16 % 8);
  // printf("%d", 16.0 % 8.0); Modular operator does not give remainder for float values.
  printf("%d \n", -8 % 6);

  // TYPE CONVERSION
  printf("%d", 4 * 5);
  int a = (int)1.935;

  return 0;
}