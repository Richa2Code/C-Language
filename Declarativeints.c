#include <stdio.h>
int main()
{
  // There are valid statements for declarative instruction.

  int a = 22;
  int b = a;
  int c = b + 1;
  int d = 1, e;

  int r, t, y; // We can declare multiple veriables at a time.
  r = t = y = 1;
  return 0;
  /*These are invalid statements of declarative instructions.
  int oldage = 22;
  int newage = oldage + years;
  int years = 2;
  return 0;
  CAUSE : Here , we use the variable years before its declarations.

  */
}