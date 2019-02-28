#include <stdio.h>

int main() {

  int inputedNumber;


  do {
    printf("Δώσε έναν αριθμό: ");
    // printf("Δώσατε τον αριθμό %d: ", inputedNumber);
    scanf("%d", &inputedNumber);
  } while(inputedNumber<100 || inputedNumber>200);

  return 0;
}
