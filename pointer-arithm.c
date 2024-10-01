#include <stdio.h>

/*
  interestingly, pointer arithmetic depends on the type, for an int it would add 4, for a long long it adds 8
*/

int main() {
  //printf() displays the string inside quotation
  long long x = 0;
  long long *p = &x;
  printf("%p\n", p);
  p += 1;
  printf("%p\n", p); // 8 more
  printf("Hello, World!\n");
  return 0;
}
