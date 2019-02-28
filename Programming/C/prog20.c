#include <stdio.h>

int func(int);

int main() {
  int i, a = 3;
  for (i = -2; i < 6; i += 3) {
    a = func(a + i);
    printf("%d\n", a);
  }
  return 0;
}

int func(int x){
  int y;
  y = ++x;
  return y;
}
