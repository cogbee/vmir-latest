#include <stdio.h>
// #include "export.h"

int k = 1111;
int cogbee(int i) {
  int tmp = k + i;
  printf("i = %d\n", tmp);
  return 22;
}
int main(void)
{
  cogbee(55);
  printf("Hello world\n");
  return 0;
}