#include <stdio.h>

int main() {

  char en = 'a';

  do {

    printf("%c", en);
    en++;

  } while(en<='z');

  return 0;
}
