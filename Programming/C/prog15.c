#include <stdio.h>

#define SIZE 3

int main() {

  int i, b[SIZE];
  float average, sum;

  sum = 0;

  printf("Δώσε %d βαθμούς\n", SIZE); 

  for (i = 0; i < SIZE; i++) {
    scanf("%d", &b[i]);
    sum += b[i];
  }

  average = sum / SIZE;

  printf("Οι βαθμοί που δώσατε είναι οι εξείς: ");

  for (i = 0; i < SIZE; i++)
    printf("%d, ", b[i]);

  printf("\n");
  printf("Το άθρισμα τους είναι: %.0f\n\n", sum);
  printf("και ο μέσος όρος τους είναι: %.2f\n", average);

  return 0;
}
