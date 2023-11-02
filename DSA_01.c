// Write the programs in C to print all the bytes of a number (int, float)

#include <stdio.h>
int main() {
  int a = 658;
  char *x = (char *)&a;

  for (int i = 0; i < sizeof(a); i++) {
    printf("%u -> %d\n", a , *x);
    x++;
  }
  return 0;
}