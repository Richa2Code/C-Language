#include <stdio.h>
#include <math.h>
int main()
{
  // If we want to use power function then its important to add this : #include<math.h>
  int a, b;
  a = 2;
  b = 5;
  int c = a + b;
  int power = pow(a, b);
  printf("%d", power);
  return 0;
}