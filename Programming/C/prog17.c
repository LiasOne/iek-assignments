#include<stdio.h>

int main() {

  double number = 0;
  double numbersCounter = 0;
  double sum = 0;
  printf("Give numbers to find they average. To get the result of inputed numbers type 0\n");

  printf("Give a number: ");
  scanf("%lf", &number);

  while (number != 0) {
    sum += number;
    numbersCounter ++;
    printf("Give a number: ");
    scanf("%lf", &number);
  }
    double average = sum / numbersCounter;
    printf("The average of the numbers you give is: %.2f\n", average);
  return 0;
}
